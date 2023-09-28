#include "main.h"
/**
 * get_bit - get the value of a bit for a particular index
 * @index: the index of the bit to get
 * @n: the number to check the value
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (t = 0; t < index; t++)
		n = n >> 1;
	return ((n & 1));
}
