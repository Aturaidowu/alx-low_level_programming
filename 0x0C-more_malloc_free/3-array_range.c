#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: newly allocated memory
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr ==  NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);

}
