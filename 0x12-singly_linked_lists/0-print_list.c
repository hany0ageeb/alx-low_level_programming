#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *cur = NULL;

	if (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		cur = h->next;
		count++;
		while (cur != NULL)
		{
			if (cur->str != NULL)
				printf("[%d] %s\n", cur->len, cur->str);
			else
				printf("[0] (nil)\n");
			cur = cur->next;
			count++;
		}
	}
	return (count);
}

