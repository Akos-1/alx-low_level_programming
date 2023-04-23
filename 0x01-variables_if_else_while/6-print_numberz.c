#include <stdio.h>
/**
 * main - Entry point
 * Description: 'numbers of base 10 using putchar'
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
