#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: vector argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mult = num1 * num2;
		printf("%d\n", mult);
	}
	return (0);
}
