#include "holberton.h"

/**
 * append_text_to_file - append text to final of file
 *
 * @filename: pointer to file
 * @text_content: pointer to text of file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int size;
	ssize_t f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		size = 0;
		while (text_content[size])
		{
			size++;
		}

		w = write(f, text_content, size);
		if (w == -1)
			return (-1);
	}

	close(f);
	return (1);
}
