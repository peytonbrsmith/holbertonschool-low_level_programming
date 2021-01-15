#include "hash_tables.h"
/**
 * key_index - takes a key and returns its index location
 *
 * @key: the key
 * @size: the size of the table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int s;

	s = hash_djb2(key);
	return (s % size);
}
