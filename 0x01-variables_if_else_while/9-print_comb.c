#include <stdio.h>

/**
 * main - program to print the combinatiokn of numbers.
 * Return: 0 on success.
*/

int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar(h % 10 + '0');

		if (h == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
