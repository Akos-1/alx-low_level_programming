#include "main.h"
/**
 * print_times_table - n times table
 * @n: number times table
 * Return: no return
 */
void print_times_table(int n)
{
	int x, y, op;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				op = x * y;
				if (op <= 99)
					_putchar(' ');
				if (op <= 9)
					_putchar(' ');
				if (op >= 100)
				{
					_putchar((op / 100) + '0');
					_putchar(((op / 10)) % 10 + '0');
				}
				else if (op <= 99 && op >= 10)
				{
					_putchar((op / 10) + '0');
				}
				_putchar((op % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
