#include <stdio.h>
/**
 * main - sum of the even-valued fibonacci numbers
 * Return: always (0)
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = d = 0;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((a % 2) == 0)
		{
			d += a;
		}
	}
	printf("%ld\n", d);
	return (0);
}
