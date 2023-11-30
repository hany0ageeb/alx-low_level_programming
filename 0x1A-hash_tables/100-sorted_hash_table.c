#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - create shash_table_t object
 * @size: hash table size
 * Return: pointer to shash_table_t or NULL if failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (table != NULL)
	{
		table->size = size;
		table->array = malloc(sizeof(shash_node_t *) * size);
		if (table->array == NULL)
		{
			free(table);
			table = NULL;
			return (NULL);
		}
		while (index < size)
		{
			table->array[index] = NULL;
			index++;
		}
		table->shead = NULL;
		table->stail = NULL;
	}
	return (table);
}
/**
 * shash_node_free - free shash_node memory
 * @node: node
 */
void shash_node_free(shash_node_t **node)
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
 * shash_node_create - create shash_node object
 * @key: key not null or empty
 * @value: value
 * Return: a pointer to created object
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node != NULL)
	{
		node->key = NULL;
		node->value = NULL;
		node->next = NULL;
		node->snext = NULL;
		node->sprev = NULL;
		node->key = malloc(sizeof(char) * (strlen(key) + 1));
		if (node->key == NULL)
		{
			shash_node_free(&node);
			return (NULL);
		}
		node->value = malloc(sizeof(char) * (strlen(value) + 1));
		if (node->value == NULL)
		{
			shash_node_free(&node);
			return (NULL);
		}
		strcpy(node->key, key);
		strcpy(node->value, value);
	}
	return (node);
}
/**
 * sorted_list_add - add node to a sorted list
 * @ht: hash table (sorted)
 * @new_node: new node to add
 */
void sorted_list_add(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *v;

	if (ht != NULL && new_node != NULL)
	{
		if (ht->shead == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
		}
		else
		{
			v = ht->shead;
			while (v != NULL && strcmp(v->key, new_node->key) <= 0)
				v = v->snext;
			if (v == NULL)
			{
				ht->stail->snext = new_node;
				new_node->sprev = ht->stail;
				ht->stail = new_node;
			}
			else
			{
				new_node->snext = v;
				new_node->sprev = v->sprev;
				if (v->sprev != NULL)
					v->sprev->snext = new_node;
				v->sprev = new_node;
				if (v == ht->shead)
					ht->shead = new_node;
			}
		}
	}
}
/**
 * shash_table_set - insert/update value
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if success otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || IS_NULL_OR_EMPT(key))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = shash_node_create(key, value);
		if (ht->array[index] != NULL)
		{
			sorted_list_add(ht, ht->array[index]);
			return (1);
		}
		return (0);
	}
	else
	{
		node = shash_node_create(key, value);
		if (node != NULL)
		{
			node->next = ht->array[index];
			ht->array[index] = node;
			sorted_list_add(ht, node);
			return (1);
		}
		return (0);
	}
}
/**
 * shash_table_get - get value by key
 * @ht: hash table
 * @key: key
 * Return: value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node = NULL;

	if (ht == NULL || IS_NULL_OR_EMPT(key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL && strcmp(key, node->key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
/**
 * shash_table_print - print hash table using the sorted listt
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("{");
		node = ht->shead;
		while (node != NULL)
		{
			if (node->snext != NULL)
				printf("'%s': '%s', ", node->key, node->value);
			else
				printf("'%s': '%s'", node->key, node->value);
			node = node->snext;
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_unsorted - unsorted print hash table
 * @ht: hash table
 */
void shash_table_print_unsorted(const shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("=>{");
		if (ht->array != NULL)
		{
			while (index < ht->size)
			{
				node = ht->array[index];
				while (node != NULL)
				{
					printf("'%s': '%s', ", node->key, node->value);
					node = node->next;
				}
				index++;
			}
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - print the hash tables key/value pairs
 * in reverse order
 * using the sorted linked list
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("{");
		node = ht->stail;
		while (node != NULL)
		{
			if (node->sprev != NULL)
				printf("'%s': '%s', ", node->key, node->value);
			else
				printf("'%s': '%s'", node->key, node->value);
			node = node->sprev;
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - free memory
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *node = NULL, *pre_node = NULL;

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
					shash_node_free(&pre_node);
				}
				i++;
			}
			free(ht->array);
		}
		free(ht);
	}
}
