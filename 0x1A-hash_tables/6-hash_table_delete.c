#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 *
 * @ht: hash table
 *
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	else if (ht->array == NULL || ht->size <= 0)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current->next;
			if (current->value)
			{
				free(current->value);
			}

			free(current->key);
			free(current);

			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
