#include "main.h"
/**
 * check - check for the square root
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion - returns square root of a given number
 * @n: int to find square of a number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
