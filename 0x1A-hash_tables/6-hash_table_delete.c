#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *pre_node = NULL;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			while (i < ht->size)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					pre_node = node;
					node = node->next;
					hash_node_free(&pre_node);
				}
				i++;
			}
			free(ht->array);
		}
		free(ht);
	}
}
