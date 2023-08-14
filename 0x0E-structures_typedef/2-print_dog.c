#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to dog to print.
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != (void *)0)
	{
		printf("Name: %s\n", d->name == (void *)0 ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == (void *)0 ? "(nil)" : d->owner);
	}
}
