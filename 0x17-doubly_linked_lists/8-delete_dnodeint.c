#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint-t
 * linked list
 * @head: pointer to head of list
 * @index: index of hte node to be deleted (starts at 0)
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	else if (*head == temp)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
