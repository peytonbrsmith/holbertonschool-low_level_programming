#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int ret = 0;
	const list_t *temp;

	temp = h;
	if (temp->str == NULL)
	{
		printf("[0] (nil)\n");
		temp = temp->next;
		ret++;
	}
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		ret++;
	}

	return (ret);
}
