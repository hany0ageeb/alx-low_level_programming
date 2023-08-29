#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: head node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *n;

	if (*head != NULL)
	{
		pre = NULL;
		n = (*head)->next;
		while (n != NULL)
		{
			(*head)->next = pre;
			pre = *head;
			*head = n;
			n = n->next;
		}
		(*head)->next = pre;
	}
	return (*head);
}

