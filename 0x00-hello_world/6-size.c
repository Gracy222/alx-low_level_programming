#include <stdio.h>

/**
 * main - this is program to print the size of various computer types
 * Return: 0 if the program is successful
 * */
int main(void)
{
	char character;
	int integer;
	long lg;
	double dou;
	float floating;

	printf("size of a char: %lu  byte(s)\n", (unsigned long)sizeof(character));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lg));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dou));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floating))	
	return (0);
}
