#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to hash table
 *
 * @ht: hash table to add to
 * @key: the key to add
 * @value: the value of the key
 *
 * Return: 1 or 0
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add;
	char *copy;
	unsigned long int i, p;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	for (p = i; ht->array[p]; p++)
	{
		if (strcmp(ht->array[p]->key, key) == 0)
		{
			free(ht->array[p]->value);
			ht->array[p]->value = copy;
			return (1);
		}
	}

	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
	{
		free(copy);
		return (0);
	}
	add->key = strdup(key);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}
	add->value = copy;
	add->next = ht->array[i];
	ht->array[i] = add;

	return (1);
}
