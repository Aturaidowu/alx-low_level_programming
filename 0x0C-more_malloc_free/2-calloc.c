#include "main.h"

/**
 * _calloc - allocates memory for an array using calloc function
 *
 * @nmemb: number of array numbers
 *
 * @size: size of array
 *
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
