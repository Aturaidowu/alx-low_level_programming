#include "main.h"
/**
 * get_endianness - this function checks the system Byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int xyz = 1;
	int small_or_big;

	small_or_big = (int) (((char *)&xyz)[0]);
	return (little_or_big);
}
