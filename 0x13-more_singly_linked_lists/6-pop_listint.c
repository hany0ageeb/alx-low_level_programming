#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: head node
 * Return: if the linked list is empty return 0
 * otherwise return head node n value
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node;

	if (*head == NULL)
		return (n);
	node = *head;
	*head = (*head)->next;
	n = node->n;
	free(node);
	return (n);
}

