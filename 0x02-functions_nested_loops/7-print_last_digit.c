#include "main.h"
/**
 * print_last_digit - the last digit of a number
 * @a: number as integer
 * Return: last digit
 */
int print_last_digit(int a)
{
	int l;

	l = a % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
