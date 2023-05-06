#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers stored
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: result
 * @size_r: buffer size
 * Result: a pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int = a1, a2 = 0, a3, a4, a5, a6, a = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		a4 = a1;
	else
		a4 = a2;
	if (size_r <= a4 + 1)
		return (0);
	r[a4 + 1] = '\0';
	a1--, a2--, size_r--;
	a5 = *(n1 + a1) - 48, a5 = *(n2 + a2) - 48;
	while (a4 >= 0)
	{
		a3 = a5 + a6 + a;
		if (a3 >= 10)
			a = a3 / 10;
		else
			a = 0;
		if (a3 > 0)
			*(r + a4) = (a3 % 10) + 48;
		else
			*(r + a4) = '0';
		if (a1 > 0)
			a1--, a5 = *(n1 + a1) - 48;
		else
			a5 = 0;
		if (a2 > 0)
			a2--, a6 = *(n2 + a2) - 48;
		else
			a6 = 0;
		a4--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

