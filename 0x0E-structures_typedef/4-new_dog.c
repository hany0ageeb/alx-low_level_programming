#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - make a copy of src string
 * @src: source string to copy
 * Return: returned a pointer  to newly created string copy.
 */
char *_strcpy(char *src)
{
	char *str = (void *)0;
	int i = 0;

	if (src != (void *)0)
	{
		while (src[i] != '\0')
			i++;
		str = malloc(sizeof(char) * i + 1);
		if (str != (void *)0)
		{
			while (i >= 0)
			{
				str[i] = src[i];
				i--;
			}
		}

	}
	return (str);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: new dog name.
 * @age: dog age
 * @owner: dog owner
 * Return: a pointer to the newly created dog or null if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (void *)0;

	d = malloc(sizeof(dog_t));
	if (d != (void *)0)
	{
		d->name = _strcpy(name);
		if (name != (void *)0 && d->name == (void *)0)
		{
			free(d);
			d = (void *)0;
			return (d);
		}
		d->age = age;
		d->owner = _strcpy(owner);
		if (owner != (void *)0 && d->owner == (void *)0)
		{
			free(d->name);
			free(d);
			return ((void *)0);
		}
	}
	return (d);
}

