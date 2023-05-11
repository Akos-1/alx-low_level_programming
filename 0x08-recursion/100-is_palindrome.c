#include "main.h"

int check_pal(char *s, int i, int long);
int _strlen_recursion(char *s);
/**
 * is_palindrome - a string is a palindrome
 * @s: string to be reversed
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s: string to be checked
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the recursion of character
 * @s: string to be checked
 * @i: iterator
 * @long: string length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int long)
{
	if (*(s + i) != *(s + long - 1))
		return (0);
	if (i >= long)
		return (1);
	return (check_pal(s, i + 1, long - 1));
}
