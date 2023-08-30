#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: head node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *visitor;
	const listint_t *pre = head;

	if (head == NULL)
		return (0);
	if (head == head->next)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
	}
	visitor = head->next;
	while (visitor != NULL)
	{
		if (visitor->visited != 'Y')
		{
			visitor->visited = 'Y';
			pre = visitor;
			printf("[%p] %d\n", (void *)visitor, visitor->n);
			visitor = visitor->next;
			count++;
		}
		else
		{
			visitor = head->next;
			while (visitor != NULL && visitor->visited == 'Y')
			{
				visitor->visited = 'N';
				visitor = visitor->next;
			}
			printf("-> [%p] %d\n", (void *)pre, pre->n);
			exit(98);
		}
	}
	return (count);
}

