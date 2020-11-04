#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index location
 * @head: pointer to the head
 * @idx: index location
 * @n: integer to store in new index
 *
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *newnode;

	while (i < (idx - 1))
	{
		if (idx == 0)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = current;
		return (newnode);
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
