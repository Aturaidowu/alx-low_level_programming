#include <stdio.h>

/**
 * main - This is where the program begins
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
