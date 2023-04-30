#include <stdio.h>
/**
 * main - prime factor
 * Return: Always 0
 */
int main(void)
{
	long int n, b;

	n = 612852475143;
	for (b = 2; b <= n; b++)
	{
		if (n % b == 0)
		{
			n /= a;
			a--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
