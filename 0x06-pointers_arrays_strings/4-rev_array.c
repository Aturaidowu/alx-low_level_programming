#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array's pointer
 * @n: number of element of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
