#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments
 * Return:  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	long size = 0, i, counter;
	char *s = NULL;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			size += strlen(av[i]);
			size += 1;
		}
	}
	size++;
	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		counter = 0;
		for (i = 0; i < ac; i++)
		{
			while (*(av[i]) != '\0' && counter < size)
			{
				s[counter] = *(av[i]);
				av[i]++;
				counter++;
			}
			s[counter] = '\n';
			counter++;
		}
		s[counter] = '\0';
	}
	return (s);
}

