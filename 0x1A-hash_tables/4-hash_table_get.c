#include "hash_tables.h"
/**
 * hash_table_get - retrieves keys
 * @ht: the hash table
 * @key: they key to look for
 *
 * Return: The existing key's value or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *val = NULL;
	hash_node_t *ptr = NULL;

	if (ht == NULL || !(strcmp(key, "")))
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			for (ptr = ht->array[i]; ptr; ptr = ptr->next)
			{
				if (!(strcmp(key, ptr->key)))
				{
					val = ptr->value;
				}
			}
		}
	}
	return (val);
}
