#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val, h;
	int cash = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);

	if (val < 0)
		printf("%d\n", 0);
	for (h = 0; h < 5; h++)
	{
		if (val >= cent[h])
		{
			cash += val / cent[h];
			val = val % cent[h];
		}
	}
	printf("%d\n", cash);
	return (0);
}
