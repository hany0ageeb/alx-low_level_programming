#include "lists.h"
/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: list head
 * Return: number of elemenyts
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *curr = NULL;

	if (h != NULL)
	{
		count++;
		curr = h->next;
		while (curr != NULL)
		{
			count++;
			curr = curr->next;
		}
	}
	return (count);
}

