#include "hash_tables.h"

/**
 * key_index - creates an index
 * @key: key
 * @size: size to mod
 * Return: new index.
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
