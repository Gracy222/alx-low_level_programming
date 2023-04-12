#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr -  a function that concatenates all the arguments of your program.
 *@ac : int
 *@av : array
 *Return: array
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		len++;
	len++;
	}

	str = malloc(sizeof(char) * len);
	if (str == NULL)
	return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		str[len++] = av[i][j];
	str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
