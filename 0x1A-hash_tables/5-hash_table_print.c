#include "hash_tables.h"

/**
 * hash_table_print - Prints a whole hash table
 *
 * @ht: hash table
 *
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	unsigned char buffer = 0;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array[0] != NULL)
	{
		node = ht->array[0];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
			{
				printf(" ,");
			}
		}
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (buffer == 1)
			{
				printf(", ");
			}
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(" ,");
				}
			}
		}
	}

	printf("}\n");
}
