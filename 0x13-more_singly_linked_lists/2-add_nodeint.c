#include "lists.h"
/**
 * add_nodeint - add node to the begining of a list
 *
 * @head: pointer to the head pointer
 * which the head points to the first node
 *
 * @n: new int. to be created
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	if (head == NULL)
		return (NULL);

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node == NULL)
		return (NULL);
	if (*head == NULL)
		fresh_node->next = NULL;
	else
		fresh_node->next = *head;
	fresh_node->n = n;
	*head = fresh_node;

	return (*head);
}
