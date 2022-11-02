#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_key;
	hash_node_t *node, *1_temp, *2_temp;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
	{
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	index_key = key_index((const unsigned char *)key, ht->size);
	1_temp = ht->array[index_key];
	while (1_temp)
	{
		if (strcmp(key, 1_temp->key) == 0)
		{
			free(1_temp->value);
			1_temp->value = strdup(value);
			return (1);
		}
	}
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[index_key] == NULL)
	{
		ht->array[index_key] = node;
		node->next = NULL;
	}
	else
	{
		2_temp = node;
		node->next = ht->array[index_key];
		ht->array[index_key] = 2_temp;
	}

	return (1);
}
