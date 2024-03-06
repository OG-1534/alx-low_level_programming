#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: is the key.
 * @size: size of the array of the hash table.
 *
 * Return: index of the key/value in the hash table
 *
 * Description: Uses the djb2 algorithm (hash_djb2 function).
 */
unsigned long key_index(const unsigned char *key, unsigned long size)
{
	return (hash_djb2(key) % size);
}
