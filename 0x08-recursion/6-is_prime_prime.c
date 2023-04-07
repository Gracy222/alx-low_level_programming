#include "main.h""
/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return: int
 */
int _sqrt_recursion(int n)
{
    if (n == 0 || n == 1)
	{
	return n;
  	}

    int root = _sqrt_recursion(n - 1) + 1;
    if (root * root > n
	{
        root--;
	int
	}

	return root;
}

