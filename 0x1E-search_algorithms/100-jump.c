#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers
 * @array: array to be searched in
 * @size: number of elements found in the array
 * @value: value to be searched
 * Return: the first index where value is located
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, curr, i;

	if (array == NULL)
	{
		return (-1);
	}

	jump = (size_t)sqrt(size);
	prev = 0;

	while (prev <= size && array[prev] < value)
	{
		curr = fmin(size - 1, prev + jump);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (array[curr] >= value || curr == size - 1)
		{
			break;
		}
		prev += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	for (i = prev; i <= curr; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
