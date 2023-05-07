#include "main.h"

/**
 * infinite_add - adds two numbers stored
 * @n1: first number to be added
 * @n2: second number to be added
 * @r:  buffer that the function will use to store the result
 * @size_r: buffer size
 * Result: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0;

	while (*(n1 + a2) != '\0')
		a2++;
	while (*(n2 + a3) != '\0')
		a3++;
	a2--;
	a3--;
	if (a3 >= size_r || a2 >= size_r)
		return (0);
	while (a3 >= 0 || a2 >= 0 || a1 == 1)
	{
		if (a2 < 0)
			a5 = 0;
		else
			a5 = *(n1 + a2) - '0';
		if (a3 < 0)
			a6 = 0;
		else
			a6 = *(n2 + a3) - '0';
		a7 = a5 + a6 + a1;
		if (a7 >= 10)
			a1 = 1;
		else
			a1 = 0;
		if (a4 >= (size_r - 1))
			return (0);
		*(r + a4) = (a7 % 10) + '0';
		a4++;
		a3--;
		a2--;
	}
	if (a4 == size_r)
		return (0);
	*(r + a4) = '\0';
	rev_string(r);
	return (r);
}
