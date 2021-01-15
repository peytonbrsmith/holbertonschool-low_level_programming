#include "hash_tables.h"
/**
 * hash_table_set - sets a key in the hash table with a value
 * @ht: hash table
 * @key: the key
 * @value: the value for the key
 * Return: 1 on success, 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node, *next;
	char *new_value = strdup(value);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = new_value;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	next = ht->array[index];
	while (next != NULL)
	{
		if (strcmp(next->key, key) == 0)
		{
			next->value = new_value;
			return (1);
		}
		next = next->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
