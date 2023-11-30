#include "hash_tables.h"
#include <errno.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_node_free - free hash node
 * @node: node
 */
void hash_node_free(hash_node_t **node)
{
	if (node != NULL && *node != NULL)
	{
		if ((*node)->key != NULL)
		{
			free((*node)->key);
			(*node)->key = NULL;
		}
		if ((*node)->value != NULL)
		{
			free((*node)->value);
			(*node)->value = NULL;
		}
		free(*node);
		*node = NULL;
	}
}
/**
 * hash_node_create - create a hash node
 * @key: key
 * @value: value
 * Return: node or NULL if failed
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	errno = 0;
	if (node != NULL)
	{
		node->key = NULL;
		node->value = NULL;
		node->next = NULL;
		node->key = malloc(sizeof(char) * (strlen(key) + 1));
		if (node->key == NULL)
		{
			errno = ENOMEM;
			hash_node_free(&node);
			return (NULL);
		}
		node->value = malloc(sizeof(char) * (strlen(value) + 1));
		if (node->value == NULL)
		{
			errno = ENOMEM;
			hash_node_free(&node);
			return (NULL);
		}
		strcpy(node->key, key);
		strcpy(node->value, value);
	}
	return (node);
}
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	errno = 0;
	if (ht == NULL || IS_NULL_OR_EMPT(key))
	{
		errno = EINVAL;
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hash_node_create(key, value);
		return (ht->array[index] != NULL);
	}
	else
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				if (node->value != NULL)
					free(node->value);
				node->value = malloc(sizeof(char) * (strlen(value) + 1));
				strcpy(node->value, value);
				return (1);
			}
			node = node->next;
		}
		node = hash_node_create(key, value);
		if (node != NULL)
		{
			node->next = ht->array[index];
			ht->array[index] = node;
			return (1);
		}
		return (0);
	}
}
