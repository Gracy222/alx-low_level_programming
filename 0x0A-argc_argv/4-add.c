#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a + b;
	{
		printf("%d\n", c);
			return (0);
	}


}
