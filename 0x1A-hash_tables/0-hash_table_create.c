#include "hash_tables.h"
/**
 * hash_table_create - creates a struct hash_table_s
 *
 * @size: the size of the array
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = NULL;
	}
	new_table->array = new_array;

	return (new_table);
}
