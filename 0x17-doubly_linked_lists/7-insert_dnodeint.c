#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list header node
 * @idx:  the index of the list where the new node should be added
 * @n: new node value
 * Return: the address of the new node, or NULL if it failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *head = *h, *pre_head = NULL;

	while (idx > 0 && head != NULL)
	{
		idx--;
		pre_head = head;
		head = head->next;
	}
	if (idx > 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (head == NULL)
		{
			if (pre_head != NULL)
			{
				pre_head->next = new_node;
				new_node->prev = pre_head;
			}
			else
			{
				*h = new_node;
				new_node->prev = NULL;
			}
			new_node->next = NULL;
		}
		else
		{
			new_node->next = head;
			new_node->prev = head->prev;
			if (head->prev != NULL)
				head->prev->next = new_node;
			head->prev = new_node;
			if (pre_head == NULL)
				*h = new_node;
		}
	}
	return (new_node);
}
