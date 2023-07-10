#include "main.h"
/**
 * create_file - creates file
 * @filename: char pointer to file name
 * @text_content: string to write to file
 * Return: 1 if successful, -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		byteswr = write(fd, text_content, strlen(text_content));
		if (byteswr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
