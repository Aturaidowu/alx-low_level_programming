#include "main.h"

/**
 *_isalpha - checks for lower and upper case alphabets
*
 *@c:function parameter
*
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
