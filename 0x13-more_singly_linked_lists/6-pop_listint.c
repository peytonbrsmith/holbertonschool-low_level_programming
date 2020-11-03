#include "lists.h"
/**
 * pop_listint - deletes node and pops out its value
 * @head: node to be deleted
 *
 * Return: node's content or 0
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;
	listint_t *next;

	if (*head != NULL)
	{
		current = *head;
		n = current->n;
		next = current->next;
		free(current);
		*head = next;
	}
	return (n);
}
