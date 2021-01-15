#include "hash_tables.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char*)key, ht->size);
	hash_node_t *new_node;

	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = (char*)key;
		new_node->value = (char*)value;
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		while (ht->array[index]->next != NULL)
		{
			ht->array[index]->next = ht->array[index]->next;
		}
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = (char*)key;
		new_node->value = (char*)value;
		new_node->next = NULL;
		ht->array[index]->next = new_node;
		return (1);
	}
	return (0);
}