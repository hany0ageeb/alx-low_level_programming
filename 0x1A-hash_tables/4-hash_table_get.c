#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || IS_NULL_OR_EMPT(key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
