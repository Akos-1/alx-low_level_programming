#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - displays the natural square root of a digit
 * @n: inputed number
 * Return: result of square root
 */
int _sqrt_recursion(int i)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - find the natural square root
 * of a number by recursing
 * @n: inputed number
 * @i: iterator
 * Return: square root result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
