#include "main.h"
/**
 * set_bit - set the bit of a num to 1
 *
 * @n: pointer to the manipulated bit
 * @index: position of the manipulated bit
 * Return: 1 on success and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	m = 1;
	m = m << index;
	*n = ((*n) | m);
	return (1);
}
