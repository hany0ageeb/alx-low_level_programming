#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copy a string.
 * @src: source string
 * Return: apointer to the copy of src.
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
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a dog pointer to initialize.
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _strcpy(name);
	d->age = age;
	d->owner = _strcpy(owner);
}

