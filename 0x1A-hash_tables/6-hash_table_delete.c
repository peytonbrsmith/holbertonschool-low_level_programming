#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash tables
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			for (ptr = ht->array[i]; ptr; ptr = temp)
			{
				free(ptr->key);
				free(ptr->value);
				temp = ptr->next;
				free(ptr);
			}
			free(ht->array[i]);
		}
	}
	free(ht);
}
