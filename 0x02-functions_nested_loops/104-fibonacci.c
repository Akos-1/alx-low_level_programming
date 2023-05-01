#include <stdio.h>
/**
 * main - first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int c;
	unsigned long x1 = 0, x2 = 1, x;
	unsigned long y1, y2, z1, z2;
	unsigned long a1, a2;

	for (c = 0; c < 92; c++)
	{
		x = x1 + x2;
		printf("%lu, ", x);
		x1 = x2;
		x2 = x;
	}
	y1 = x1 / 10000000000;
	z1 = x2 / 10000000000;
	y2 = x1 % 10000000000;
	z2 = x2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		a1 = y1 + z1;
		a2 = y2 + z2;
		if (y2 + z2 > 9999999999)
		{
			a1 += 1;
			a2 %= 10000000000;
		}
		printf("%lu%lu", a1, a2);
		if (c != 98)
			printf(", ");
		y1 = z1;
		y2 = z2;
		z1 = a1;
		z2 = a2;
	}
	printf("\n");
	return (0);
}
