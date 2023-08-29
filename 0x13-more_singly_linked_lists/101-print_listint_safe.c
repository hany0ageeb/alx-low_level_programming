#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_address - list of pointer address
 * @address: address
 * @nex: next
 */
struct list_address
{
	unsigned long int address;
	struct list_address *next;
};
/**
 * add_node - add node in front of head
 * @head: head node
 * @add: address
 */
void add_node(struct list_address **head, unsigned long int add)
{
	struct list_address *node = malloc(sizeof(struct list_address));

	if (node != NULL)
	{
		node->address = add;
		node->next = *head;
		*head = node;
	}
}
/**
 * address_exists - check if address exists
 * @head: head
 * @add: address
 * Return: -1 if not exist or 1 otherwise
 */
int address_exists(struct list_address *head, unsigned long int add)
{
	while (head != NULL)
	{
		if (head->address == add)
			return (1);
		head = head->next;
	}
	return (-1);
}
/**
 * free_list - free list
 * @head: head
 */
void free_list(struct list_address **head)
{
	struct list_address *pre, *end;

	while (*head != NULL)
	{
		pre = NULL;
		end = *head;
		while (end->next != NULL)
		{
			pre = end;
			end = end->next;
		}
		if (*head == end)
			*head = NULL;
		free(end);
		if (pre != NULL)
			pre->next = NULL;
	}
	free(*head);
	*head = NULL;
}
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: head node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	struct list_address *str = NULL;
	listint_t *c = NULL;

	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		c = head->next;
		add_node(&str, (unsigned long int) head);
		while (c != NULL)
		{
			if (address_exists(str, (unsigned long int)c) == 1)
			{
				printf("-> [%p] %d\n", (void *)c, c->n);
				free_list(&str);
				exit(98);
			}
			printf("[%p] %d\n", (void *)c, c->n);
			add_node(&str, (unsigned long int)c);
			c = c->next;
			count++;
		}
	}
	free_list(&str);
	return (count);
}

