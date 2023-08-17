#include "main.h"

/**
 * print_diagonal - prints diagonal using the backward slash
 * @n: number of times '\' will be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
