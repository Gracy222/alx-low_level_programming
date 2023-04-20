#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Mandatory parameter
 *
 * Return: the sum, otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
