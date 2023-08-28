#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: head node
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}

