#include "hash_tables.h"
/**
 * key_index - return the index of a key.
 * @key: is the key.
 * @size: is the size of the array of the hash table.
 * Return: the index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key);
	return (x % size);
}
