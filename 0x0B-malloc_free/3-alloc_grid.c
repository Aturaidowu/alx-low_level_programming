#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimention array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to an array of int..
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	output = malloc(height * sizeof(int *));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(width * sizeof(int));
		if (output[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(output[i]);
			free(output);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			output[i][j] = 0;

	return (output);
}
