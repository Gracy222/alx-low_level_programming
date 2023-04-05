#include "main.h"

/*
 * _puts_recursion - prints a string, followed by a new line.
 * @s: - parameter to be checked
 * Return: - Nothing
 */

void _puts_recursion(char *s);
{

	if (*s != '\n')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
