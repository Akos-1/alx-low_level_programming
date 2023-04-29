#include <stdio.h>
/**
 * main - sum of the Fibonacci numbers
 * Return: always (0)
 */
int main(void)
{
	int c;
	long int x, y, z;

	x = 1;
	y = 2;
	printf("%ld,%ld", x, y);
	for (c = 0; c < 48; c++)
	{
		z = x + y;
		printf(",%ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
