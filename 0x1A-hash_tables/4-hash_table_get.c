#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key.
 * Return: he value associated with the element, or NULL if failed.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_key = 0;
	hash_node_t *tmp;

	if (!key || !*key || !ht)
	{
		return (NULL);
	}
	index_key = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index_key];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
}
