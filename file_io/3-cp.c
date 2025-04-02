#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * handle_error - Prints error message and exits with code
 * @code: Exit code
 * @msg: Error message
 * @arg: Additional argument for message
 * @fd: File descriptor to close (if applicable)
 */
void handle_error(int code, const char *msg, const char *arg, int fd)
{
	if (fd != -1)
		close(fd);
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * copy_file - Copies content from one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @filename: Destination filename for error messages
 */
void copy_file(int fd_from, int fd_to, const char *filename)
{
	char buffer[BUF_SIZE];
	ssize_t read_bytes, write_bytes;

	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			handle_error(99, "Error: Can't write to %s\n", filename, -1);
		}
	}

	if (read_bytes == -1)
	{
		handle_error(98, "Error: Can't read from file %s\n", filename, -1);
	}
}

/**
 * main - Copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from = -1, fd_to = -1;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		handle_error(98, "Error: Can't read from file %s\n", argv[1], -1);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		handle_error(99, "Error: Can't write to %s\n", argv[2], fd_from);
	}

	copy_file(fd_from, fd_to, argv[1]);

	if (close(fd_from) == -1)
	{
		handle_error(100, "Error: Can't close fd %d\n", NULL, fd_to);
	}

	if (close(fd_to) == -1)
	{
		handle_error(100, "Error: Can't close fd %d\n", NULL, -1);
	}

	return (0);
}
