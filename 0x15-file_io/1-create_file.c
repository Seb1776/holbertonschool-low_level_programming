#include "holberton.h"

/**
 * create_file - verify if text content exist or create a file
 *
 * @filename: pointer a file
 * @text_content: pointer to file
 * Return: 1 or -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int size;
	ssize_t w, f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		size = 0;
		while (text_content[size])
		{
			size++;
		}
	}

	w = write(f, text_content, size);

	if (w == -1)
		return (0);

	close(f);
	return (1);
}
