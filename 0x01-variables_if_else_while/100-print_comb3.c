#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Different combination of two digits'
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
