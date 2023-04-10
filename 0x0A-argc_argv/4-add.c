#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
	
		for (b = 0; argv[a][b] != '\0'; b++)
		{
		
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
			
				printf ("Error\n");
				return (1);
			}
		}
		num = atoi(argv[a]);
		sum = sum + num;
	}
	printf ("%d\n", sum);
	return (0);
			
}
