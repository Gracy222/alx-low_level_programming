#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIMITER " "

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **words = NULL;
	char *word = NULL;
	int i = 0;

	word = strtok(str, DELIMITER);
		while (word != NULL)
	{
	words = realloc(words, sizeof(char *) * (i + 1));
	words[i] = word;
	i++;
	word = strtok(NULL, DELIMITER);
	}
	words = realloc(words, sizeof(char *) * (i + 1));
	words[i] = NULL;

	return (words);
}
