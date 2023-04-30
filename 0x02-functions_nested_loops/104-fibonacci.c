#include <stdio.h>
/**
 * main - the first 98 Fibonacci numbers
 *Return: always 0
 */
int main(void)
{
	int a, b, c;
	long int m, n, o, p, q, r;

	m = 1;
	n = 2;
	b = c = 1;
	printf("%ld,%ld", a, b);
	for (a = 0; a < 96; a++)
	{
		if (b)
		{
			o = m + n;
			printf(",%d", o);
			m = n;
			n = o;
		}
		else
		{
			if (c)
			{
				q = m % 1000000000;
				r = n % 1000000000;
				m = m / 1000000000;
				n = n / 1000000000;
				c = 0;
			}
			p = (q + r);
			o = m + n + (p / 1000000000);
			printf(",%ld", o);
			printf("%ld", p % 1000000000);
			m = n;
			q = r;
			n = o;
			r = (p % 1000000000);
		}
		if (((m + n) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}

