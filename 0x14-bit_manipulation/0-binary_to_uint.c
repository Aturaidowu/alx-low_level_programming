#include "main.h"
/**
 * binary_to_uint - converts binary numbers to decimal numbers
 *
 * @b: a character pointer to a string
 *
 * Return: decimal converted (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lent;
	size_t i = 0;
	size_t j = 0;
	size_t summ = 0;
	size_t powr = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (lent = 0; b[lent] != '\0'; lent++)
		;
	if (lent == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = lent - 1; j > 0; j--)
		powr = powr * base;
		summ = summ + (powr * (b[i] - 48));
		lent--;
		powr = 1;
	}
	return (summ);
}
