#include "main.h"
/**
 * _strlen_recursion - brings back a string's length
 * @s: inputed string
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
