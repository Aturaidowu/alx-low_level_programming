#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 *
 * @head: the pointer pointing to the head of the list
 * @n: data to be added to the new list
 * Return: addresss of the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new1;
	listint_t *temp;

	(void)temp;

	new1 = malloc(sizeof(listint_t));
	if (new1 == NULL)
		return (NULL);

	new1->n = n;
	new1->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new1;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new1;
	}

	return (*head);
}
