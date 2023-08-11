#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on sucess
 */

int main(void)
{
	int j;
	char i;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
