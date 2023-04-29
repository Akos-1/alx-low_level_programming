#include "main.h"
/**
 * jack_bauer - every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c;
	int d;

	while (a <= 23)
	{
		while (b <= 59)
		{
			d = b % 10;
			c = a % 10;
			_putchar(a / 10 + 0);
			_putchar(c + 0);
			_putchar(':');
			_putchar(b / 10 + 0);
			_putchar(d + 0);
			b++;
			_putchar('\n');
		}
		a++;
		b = 0;
	}
}
