#include "main.h"
/**
 * get_endianness - check the system Byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	int small_or_big;

	small_or_big = (int) (((char *)&x)[0]);
	return (small_or_big);
}
