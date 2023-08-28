#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head: head node
 * @index: is the index of the node, starting at 0
 * Return: is the index of the node, starting at 0
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		index--;
		head = head->next;
	}
	return (head);
}

