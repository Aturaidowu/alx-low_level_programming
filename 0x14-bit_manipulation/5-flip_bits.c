#include "main.h"
/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: number1 to compare
 * @m: number2 to compare
 * Return: number of bits you would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer;
	unsigned long int Scount;

	answer = n ^ m;
	for (Scount = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
			Scount++;
		answer = answer >> 1;
	}
	return (Scount);
}
