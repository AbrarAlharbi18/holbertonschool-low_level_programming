#include "holberton.h"

/**
 * _errexit - print error message and exit
 * @str: error message format
 * @file: filename for error message
 * @code: exit code
 * @fd: file descriptor to close
 */
void _errexit(char *str, char *file, int code, int fd)
{
	if (fd != -1)
		close(fd);
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}

/**
 * _cp - copy source file to destination file
 * @file_from: source file
 * @file_to: destination file
 */
void _cp(char *file_from, char *file_to)
{
	int fd1 = -1, fd2 = -1;
	ssize_t numread, numwrote;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98, -1);

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd2 == -1)
		_errexit("Error: Can't write to %s\n", file_to, 99, fd1);

	while ((numread = read(fd1, buffer, 1024)) > 0)
	{
		numwrote = write(fd2, buffer, numread);
		if (numwrote != numread)
			_errexit("Error: Can't write to %s\n", file_to, 99, fd1);
	}

	if (numread == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98, fd2);

	if (close(fd2) == -1)
		_errexit("Error: Can't close fd %d\n", NULL, 100, fd1);

	if (close(fd1) == -1)
		_errexit("Error: Can't close fd %d\n", NULL, 100, -1);
}

/**
 * main - copies a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
