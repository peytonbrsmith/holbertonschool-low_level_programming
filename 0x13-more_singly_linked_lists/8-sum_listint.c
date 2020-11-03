#include "lists.h"
/**
 * sum_listint - sums up a list of ints
 * @head: head of the list of ints
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		sum += current->n;
		next = current->next;
		current = next;
	}

	return (sum);
}
