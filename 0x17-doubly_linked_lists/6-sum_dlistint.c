#include "lists.h"
/**
 * sum_dlistint - sums up a list of ints
 * @head: head of the list of ints
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		sum += current->n;
		next = current->next;
		current = next;
	}
	return (sum);
}
