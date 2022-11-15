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
	unsigned long int i = 0;
	unsigned char buffer = 0;

	if (!(ht))
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (buffer == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

			ht->array[i] = ht->array[i]->next;

			buffer = 1;
		}
	}

	printf("}\n");
}
