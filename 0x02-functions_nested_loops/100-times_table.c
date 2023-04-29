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
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				op = x * y;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar(((op % 10) + 48));
							}
							}
							_putchar('\n');
							}
							}
							}
