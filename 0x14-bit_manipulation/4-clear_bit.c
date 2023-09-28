#include "main.h"
/**
 * clear_bit - set value of a bit to 0
 *
 * @n: pointer to number
 * @index: point to change bit to 0
 * Return: an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int met;

	met = 1;
	met = met << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = met ^ *n;

	return (1);
}

