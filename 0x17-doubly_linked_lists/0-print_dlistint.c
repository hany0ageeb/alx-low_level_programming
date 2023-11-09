#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: list header
 * Return:  the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
