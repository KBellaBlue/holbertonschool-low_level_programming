#include "hash_tables.h"

/**
 * hash_table_get - Gets value associated wtih key from hash table
 *
 * @ht: hash table
 * @key: the key to pull
 *
 * Return: value or NULL
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	if (i >= ht->size)
	{
		return (NULL);
	}

	node = ht->array[i];

	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}
