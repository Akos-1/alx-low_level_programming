#include "main.h"
/**
 * puts_half - half of a string
 * @str: input
 * Return: no return
 */
void puts_half(char *str)
{
	int a = 0, b;

	while (a >= 0)
	{
		if (str[a] == '\0')
			break;
		a++;
	}
	if (a % 2 == 1)
		b = a / 2;
	else
		b = (a - 1) / 2;
	for (b++; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
