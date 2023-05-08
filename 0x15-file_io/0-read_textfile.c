#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int moush;
	ssize_t n_bale, n_cat;
	char *buffer;

	if (filename == NULL)
		return (0);

	moush = open(filename, O_RDONLY);
	if (moush == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_bale = read(moush, buffer, letters);
	if (n_bale == -1)
	{
		free(buffer);
		close(moush);
		return (0);
	}

	n_cat = write(STDOUT_FILENO, buffer, n_bale);
	if (n_cat == -1)
	{
		free(buffer);
		close(moush);
		return (0);
	}

	close(moush);
	return (n_bale);

}
