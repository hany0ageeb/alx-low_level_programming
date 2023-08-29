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
	listint_t *ps, *pf;

	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		ps = head->next;
		pf = head->next;
		while (ps != NULL && pf != NULL && pf->next != NULL)
		{
			printf("[%p] %d\n", (void *)ps, ps->n);
			count++;
			ps = ps->next;
			pf = pf->next->next;
			if (ps == pf)
			{
				printf("-> [%p] %d\n", (void *)pf, pf->n);
				exit(98);
			}
		}
		while (ps != NULL)
		{
			printf("[%p] %d\n", (void *)ps, ps->n);
			count++;
			ps = ps->next;
		}
	}
	return (count);
}

