#include "main.h"
/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1 ; x <= n ; x++)
		{
			_putchar(95);

		}
	}
	_putchar('\n');
}
