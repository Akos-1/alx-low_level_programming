#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - displays natural square root of a number
 * @n: inputed number
 * Return: result of square root
 */
int_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - finds natural square root of a number
 * @n: inputed number
 * @i: iterator
 * Return: result of square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_ sqrt_recursion(n, i + 1));
}

