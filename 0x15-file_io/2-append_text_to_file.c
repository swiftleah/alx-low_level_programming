#include "main.h"
/**
 * append_text_to_file - appends text at end of file
 * @filename: char pointer to filename
 * @text_content - pointer to string to add at end of file
 *
 * Return: 1 if successful, -1 upon failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswr;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
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
