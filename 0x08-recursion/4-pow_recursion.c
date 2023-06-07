#include "main.h"
/**
 * _pow_recursion - rturns the value of x
 * @a: value to raise
 * @b: power
 *
 * Return: result of power
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
