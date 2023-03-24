#include "maiin.h"
/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1 ; a <= n ; a++)
		{
			_putchar(95);
		}
	 _putchar('\n');
	}
}
