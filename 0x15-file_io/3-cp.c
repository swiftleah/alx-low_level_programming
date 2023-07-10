#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
/**
 * print_error - error message
 * @message: message to be printed with "Error"
 * Return: nothing.
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * main - copies content of file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 97, 98, 99, 100 if error
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesrd, byteswr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Can't read from file");
		print_error(file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Can't write to file");
		print_error(file_to);
		close(fd_from);
		exit(99);
	}
	while ((bytesrd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		byteswr = write(fd_to, buffer, bytesrd);
		if (byteswr == -1)
		{
			print_error("Can't write to file");
			print_error(file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytesrd == -1)
	{
		print_error("Can't read from file");
		print_error(file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "FD_VALUE: %d\n", fd_to);
		exit(100);
	}
	return (0);
}
