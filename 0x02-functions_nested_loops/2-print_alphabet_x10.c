#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = a; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
