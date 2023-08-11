#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
