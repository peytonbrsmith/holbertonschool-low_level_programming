#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head
 * @index: index location
 *
 * Return: pointer to new node or NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *next;
	dlistint_t *prev;

	while (i < (index - 1))
	{
		if (index == 0)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		next = current->next;
		*head = next;
		current->prev = NULL;
		free(current);
		return (1);
	}
	next = current->next->next;
	prev = current->next->prev;
	free(current->next);
	next->prev = prev;
	prev->next = next;
	return (1);
}
