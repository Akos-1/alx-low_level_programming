#include "main.h"
/**
 * _print_rev_recursion - prints string reversal
 * @s: inputed string
 * Return: always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
