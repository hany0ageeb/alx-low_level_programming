#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node
 * @index: the index of the node, starting from 0
 * Return: the nth node or NULL if not exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0 && head != NULL)
	{
		index--;
		head = head->next;
	}
	return (head);
}
