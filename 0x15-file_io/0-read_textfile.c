#include "holberton.h"

/**
 * read_textfile - read a file an show length of characters
 *
 * @filename: pointer to file
 * @letters: length of file (in chars)
 *
 * Return: length of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	char *buf;
	ssize_t a, b;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);

	if (buf == NULL)
	{
		return (0);
	}

	text = open(filename, O_RDONLY);

	if (text == -1)
	{
		return (0);
	}

	a = read(text, buf, letters);

	if (a == -1)
		return (0);

	b = write(STDOUT_FILENO, buf, a);
	if (b == -1)
		return (0);

	close(text);
	free(buf);

	return (a);
}
