#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add
 * @a: int
 * @b: int
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: int
 * @b: int
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: int
 * @b: int
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int
 * @b: int
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	{
		return (a / b);
	}
}

/**
 * op_mod - mod
 * @a: int
 * @b: int
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	{
		return (a % b);
	}
}
