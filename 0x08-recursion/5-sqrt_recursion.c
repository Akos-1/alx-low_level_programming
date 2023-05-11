#include "main.h"
int real_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - displays the natural square root of a number
 * @n: inputed number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - naturalsquare root of a number
 * @n: inputed number
 * @i: iterator
 * Return: natural square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

