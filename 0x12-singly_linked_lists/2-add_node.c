#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - a function to find string length
 * @str: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: head
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
	}
	return (node);
}

