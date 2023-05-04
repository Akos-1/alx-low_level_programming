#include "main.h"
/**
 * print_number - number chars
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_puthar((a % 10) + '0');
}
