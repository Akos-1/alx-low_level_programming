#include "main.h"
/**
 * array_range - an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, b = 0, c = min;

	if (min > max)
		return (0);
	arr = malloc((max - min * 1) * sizeof(int));
	if (!arr)
		return (0);
	while (b <= max - min)
		arr[b++] = c++;
	return (arr);
}
