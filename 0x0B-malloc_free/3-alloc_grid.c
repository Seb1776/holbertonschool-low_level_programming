#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Columns.
 * @height: Rows.
 * Return: Pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arrd2;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrd2 = (int **) malloc(height * sizeof(int *));

	if (arrd2 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrd2[i] = (int *)malloc(width * sizeof(int));

		if (arrd2[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(arrd2[i]);

			free(arrd2);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arrd2[i][j] = 0;

	return (arrd2);
}
