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
			i = 0;
			while (src[i] != '\0')
			{
				str[i] = src[i];
				i++;
			}
			str[i] = '\0';
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
	dog_t *d = malloc(sizeof(dog_t));

	if (d != (void *)0)
	{
		d->name = _strcpy(name);
		d->age = age;
		d->owner = _strcpy(owner);
	}
	return (d);
}

