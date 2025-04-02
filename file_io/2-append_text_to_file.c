#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: Name of the file
 * @text_content: NULL terminated string to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	ssize_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		write_result = write(fd, text_content, length);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
