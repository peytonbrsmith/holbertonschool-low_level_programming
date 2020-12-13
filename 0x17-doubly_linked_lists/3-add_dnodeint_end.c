#include "lists.h"
/**
 * add_dnodeint_end - adds nodes to a linked list of integers
 * @head: pointer to the head
 * @n: integer
 *
 * Return: pointer to new node or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *last = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->prev = last;
	return (temp);
}
