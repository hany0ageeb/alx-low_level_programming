#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: header node
 * @n: node value
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = NULL;

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			new_node->prev = NULL;
			new_node->next = NULL;
			*head = new_node;
		}
		else
		{
			current = *head;
			while (current->next != NULL)
				current = current->next;
			current->next = new_node;
			new_node->prev = current;
		}
	}
	return (new_node);
}
