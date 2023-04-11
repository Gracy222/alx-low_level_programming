#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  *str_concat - concatenates two strings.
 *  @s1: are pointers to two null-terminated strings
 *  that you want to concatenate.
 *  @s2: are pointers to two null-terminated strings
 *  that you want to concatenate.
 *
 *  Return: pointer should point to a newly allocated space in memory
 *  or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s3;

	s3 = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (s3 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
