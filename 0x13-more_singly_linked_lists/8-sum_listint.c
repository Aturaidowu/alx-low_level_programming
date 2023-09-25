#include "lists.h"
/**
 * sum_listint - sum up all the data of a list
 * @head: pointer to the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
