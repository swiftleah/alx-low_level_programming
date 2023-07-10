#include "main.h"
/**
 * read_textfile - reads text file & prints to POSIX stdout
 * @filename: char pointer to filename
 * @letters: pointer to number of letters
 * Return: 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesrd;
	ssize_t byteswr;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesrd = read(fd, buffer, letters);
	if (bytesrd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	byteswr = write(STDOUT_FILENO, buffer, bytesrd);
	if (bytesrd == -1 || byteswr != bytesread)
	{
		close(fd);
		free(cuffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesrd);
}
