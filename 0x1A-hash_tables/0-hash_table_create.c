#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create -  a function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table != NULL)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array != NULL)
		{
			while (i < size)
			{
				table->array[i] = NULL;
				i++;
			}
		}
		else
		{
			free(table);
			table = NULL;
		}
	}
	return (table);
}
