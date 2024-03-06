#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int mx;

	if (!ht)
		return;

	for (mx = 0; mx < ht->size; mx++)
	{
		node = ht->array[mx];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
