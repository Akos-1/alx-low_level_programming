#include <stdio.h>
/**
 * main - sum of the Fibonacci numbers
 * Return: always (0)
 */
int main(void)
{
	int c;
	unsigned long x1 = 0, x2 = 1, x;

	for (c = 0; c < 50; c++)
	{
		x = x1 + x2;
		printf("%lu", x);
		x1 = x2;
		x2 = x;
		if (c == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
