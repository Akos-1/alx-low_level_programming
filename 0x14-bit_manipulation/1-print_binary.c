#include "main.h"

/**
 * print_binary - displays the binary representation of a number
 * @n: inputed number
 */
void print_binary(unsigned long int n)
{
	int y, num = 0;
	unsigned long int present;

	for (y = 63; y >= 0; y--)
	{
		present = n >> y;
		if (present & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
