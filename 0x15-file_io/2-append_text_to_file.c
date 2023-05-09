#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int moush;
	int n_wrote;

	if (!filename)
		return (-1);

	moush = open(filename, O_WRONLY | O_APPEND);
	if (moush == -1)
		return (-1);

	if (!text_content)
	{
		close(moush);
		return (1);
	}

	n_wrote = write(moush, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(moush);
		return (-1);
	}

	close(moush);
	return (1);
}
