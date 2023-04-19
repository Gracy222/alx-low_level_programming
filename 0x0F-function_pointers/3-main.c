#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - simple operation performed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (fun == Null)
	{
		printf("Error\n");
		exit(98);
	}
	c = fun(a, b);
	printf("%d\n", c);
	return (0);
}
