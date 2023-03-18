#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */


int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	if (letters != 'q' && letters != 'e')
	putchar(letters);
	putchar('\n');
	return (0);	
}
