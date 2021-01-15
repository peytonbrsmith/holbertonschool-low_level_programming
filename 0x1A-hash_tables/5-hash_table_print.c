#include "hash_tables.h"
/**
 * hash_table_print - prints hash tables
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;
	int needcomma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			for (ptr = ht->array[i]; ptr; ptr = ptr->next)
			{
				if (needcomma == 1)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				needcomma = 1;
			}
		}
	}
	printf("}\n");
}
