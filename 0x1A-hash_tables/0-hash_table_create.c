#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the newly created hash table,
 * or return NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int p;

	if (size == 0)
	{
		return (NULL);
	}

	/* Memory allocation to the hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	/* Memory allocation for array of hash nodes */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	/* Initializing all pointers to hash node to NULL */
	for (p = 0; p < size; p++)
	{
		hash_table->array[p] = NULL;
	}

	return (hash_table);
}
