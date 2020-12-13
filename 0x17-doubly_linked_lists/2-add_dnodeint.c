#include "lists.h"
/**
 * add_dnodeint - adds nodes to a linked list of integers
 * @head: pointer to the head
 * @n: integer
 *
 * Return: pointer to new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		return (temp);
	}
	temp->n = n;
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	return (temp);
}
