#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head
 * @index: index location
 *
 * Return: pointer to new node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *next;

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
		*head = current->next;
		free(current);
		return (1);
	}
	next = current->next->next;
	free(current->next);
	current->next = next;
	return (1);
}
