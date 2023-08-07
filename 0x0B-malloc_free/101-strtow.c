#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * word_count - count the number of words
 * @str: string
 * Return: words coun
 */
int word_count(char *str)
{
	int count = 0, inside_word = 0;

	if (str == NULL || *str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str != ' ' && *str != '\t')
		{
			inside_word = 1;
		}
		else
		{
			if (inside_word)
				count++;
			inside_word = 0;
		}
		str++;
	}
	if (inside_word)
		count++;
	return (count);
}
/**
 * word_length - number of char in word.
 * @str: string
 * @start: start index
 * Return: word length
 */
int word_length(char *str, int start)
{
	int l = 0;

	while (str[start] != ' ' && str[start] != '\t' && str[start] != '\0')
	{
		l++;
		start++;
	}
	return (l);
}
/**
 * get_word - get the next word from start
 * @str: string
 * @start: pointer to start index
 * Return: pointer to the word or null
 */
char *get_word(char *str, int *start)
{
	int l, i = 0;
	char *word = NULL;

	while ((str[*start] == '\t' || str[*start] == ' ') && str[*start] != '\0')
		(*start)++;
	l = word_length(str, *start);
	if (l > 0)
	{
		word = malloc(sizeof(char) * (l + 1));
		if (word != NULL)
		{
			while (str[*start] != '\t' && str[*start] != ' ' && str[*start] != '\0')
			{
				word[i] = str[*start];
				(*start)++;
				i++;
			}
			word[i] = '\0';
		}
	}
	return (word);

}
char **strtow(char *str)
{
	char **words = NULL;
	char *word = NULL;
	int w_count, start = 0, i;

	if (str == NULL || *str == '\0')
	{
		printf("str is null\n");
		return (NULL);
	}
	w_count = word_count(str);
	words = malloc((w_count + 1) * sizeof(char *));
	if (words != NULL)
	{
		words[w_count] = NULL;
		i = 0;
		while (str[start] != '\0')
		{
			word = get_word(str, &start);
			if (word != NULL)
			{
				words[i] = word;
				i++;
				word = NULL;
			}
		}
	}
	return (words);
}

