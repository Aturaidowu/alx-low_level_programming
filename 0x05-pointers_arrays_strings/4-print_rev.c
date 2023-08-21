#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	for (j = count - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
