#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *s, int moush)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int moush_1, moush_2, n_cat, n_catty;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	moush_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (moush_2 == -1)
		__exit(99, argv[2], 0);

	moush_1 = open(argv[1], O_RDONLY);
	if (moush_1 == -1)
		__exit(98, argv[1], 0);

	while ((n_cat = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_cat == -1)
			__exit(98, argv[1], 0);

		n_catty = write(moush_2, buffer, n_cat);
		if (n_catty == -1)
			__exit(99, argv[2], 0);
	}

	close(moush_2) == -1 ? (__exit(100, NULL, moush_2)) : close(moush_2);
	close(moush_1) == -1 ? (__exit(100, NULL, moush_1)) : close(moush_1);
	return (0);
}
