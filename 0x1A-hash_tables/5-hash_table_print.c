#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL, *pre_node = NULL;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (pre_node == NULL)
					printf("'%s': '%s'", node->key, node->value);
				else
					printf(", '%s': '%s'", node->key, node->value);
				pre_node = node;
				node = node->next;
			}
			i++;
		}
		printf("}\n");
	}
}
