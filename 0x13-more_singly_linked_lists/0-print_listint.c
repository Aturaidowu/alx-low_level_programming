#include "lists.h"
/**
 * print_listint - print the int data in a singly linked list
 *
 * @h: the head pointer to the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num1;

	if (h == NULL)
		return (0);
	for (num1 = 0; h != NULL; num1++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num1);
}
