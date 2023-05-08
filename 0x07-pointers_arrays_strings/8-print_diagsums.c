#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - starting point
 * @a: array
 * @size: inputed size
 * Return: always 0 (success)
 *
 */
void print_diagsums(int *a, int size)
{

	int num1, num2, x;

	num1 = 0;
	num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 = num1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		num2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
