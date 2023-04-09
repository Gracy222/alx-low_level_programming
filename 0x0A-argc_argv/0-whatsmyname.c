#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	(void) argc;
	printf("%s/n", argv[0]);
		return (0);
}