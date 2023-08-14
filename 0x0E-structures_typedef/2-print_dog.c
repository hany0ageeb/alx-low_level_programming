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
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
