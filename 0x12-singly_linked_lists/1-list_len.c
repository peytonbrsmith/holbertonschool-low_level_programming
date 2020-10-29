#include "lists.h"
/**
 * list_len - lists # of links in linked lists
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int ret = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		ret++;
	}

	return (ret);
}
