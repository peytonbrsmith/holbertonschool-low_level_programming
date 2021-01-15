#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = hash_table_create(3);
	hash_table_set(ht, "stylist", "holberton");
	hash_table_set(ht, "subgenera", "holberton");
	index = key_index((const unsigned char*)"betty", ht->size);
	printf("betty:\n-----\nkey: %s\n value: %s\n", ht->array[index]->key, ht->array[index]->value);

	return (EXIT_SUCCESS);
}