#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size bytes of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m, n, o;

	m = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		n = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (n = 0; n < 10; n++)
		{
			if (n < o)
				printf("%02x", *(b + m + n));
			else
				printf(" ");
			if (n % 2)
			{
				printf(" ");
			}
			for (n = 0; n < o; n++)
				int c = *(b + m + n);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}
