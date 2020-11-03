#include "lists.h"
/**
 * add_nodeint_end - adds nodes to the end of the linked list or starts one
 * @head: pointer to the head
 * @n: integer
 *
 * Return: pointer to new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

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
	return (temp);
}
