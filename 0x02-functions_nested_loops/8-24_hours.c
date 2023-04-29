#include "main.h"
/**
 * jack_bauer - every minutes in a day
 *
 * Return: 0 if successful
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				_putchar(0);
				_putchar(a + 0);
			}
			else
			{
				_putchar(a / 10 + 0);
				_putchar(a % 10 + 0);
			}
			_putchar(':');
			if (b < 10)
			{
				_putchar(0);
				_putchar(b + 0);
			}
			else
			{
				_putchar(b / 10 + 0);
				_putchar(b % 10 + 0);
			}
			_putchar('\n');
			if (a == 23 && b == 29)
			{
				return;
			}
		}
	}
}
