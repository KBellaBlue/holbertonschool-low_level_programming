#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: the size of the table
 *
 * Return: pointer to newly created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tible;
	unsigned long int i;

	tible = malloc(sizeof(hash_table_t));
	if (tible == NULL)
		return (NULL);

	tible->size = size;
	tible->array = malloc(sizeof(hash_node_t *) * size);

	if (tible->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tible->array[i] = NULL;
	}

	return (tible);
}
