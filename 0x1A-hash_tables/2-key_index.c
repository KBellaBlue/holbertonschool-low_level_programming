#include "hash_tables.h"

/**
 * key_index - Returns index of a kay
 *
 * @key: the key
 * @size: the size of the table
 *
 * Return: the index of the key
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
