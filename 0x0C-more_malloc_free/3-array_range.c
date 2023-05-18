#include "main.h"
/**
 * array_range - an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: pointer
 * if min > max, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ar, b;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (b = 0; min <= max; b++, min++)
		ar[b] = min;
	return (ar);
}
