#include "lists.h"
/**
 * add_nodeint - adds nodes to a linked list of integers
 * @head: pointer to the head
 * @n: integer
 *
 * Return: pointer to new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = temp;
		temp->n = n;
		temp->next = NULL;
		return (temp);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
