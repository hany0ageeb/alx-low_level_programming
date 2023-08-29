#include "lists.h"
#include <stdlib.h>
/**
 * detect_loop - detects loop
 * @head: head
 * Return: null ot nodeadd
 */
listint_t *detect_loop(listint_t *head)
{
	listint_t *ps, *pf;

	ps = head;
	pf = head;
	while (ps != NULL && pf != NULL && pf->next != NULL)
	{
		ps = ps->next;
		pf = pf->next->next;
		if (ps == pf)
			return (ps);
	}
	return (NULL);
}
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *end, *pre_end;

	end = detect_loop(*head);
	if (end != NULL)
	{
		if (end == *head)
		{
			*head = end->next;
		}
		end->next = NULL;
	}
	while (*head != NULL && (*head)->next != NULL)
	{
		pre_end = *head;
		end = (*head)->next;
		while (end != NULL && end->next != NULL)
		{
			pre_end = end;
			end = end->next;
		}
		free(end);
		if (pre_end != NULL)
			pre_end->next = NULL;
	}
	free(*head);
	*head = NULL;
}

