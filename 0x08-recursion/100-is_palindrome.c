#include "main.h"
/**
 *  _strlen_recursion - check string length
 *  @s:string
 *  Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
			return (len);
	}
	else
		return (len);
}
/**
 * _check_palindrome - checks to see if a string is a palindrome
 * @i:int
 * @len: string length
 * @s: string
 * Return: int
 */
int _check_palindrome(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
	{
		return (0);
	}
	else if (i >= len)
		return (1);
	else
		return (_check_palindrome(s, i + 1, len - 1));

}
/**
 *is_palindrome - returns 1 or 0
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_check_palindrome(s, 0, len));
}
