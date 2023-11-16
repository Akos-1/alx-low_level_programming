#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array of integers
 * @array: array to be searched in
 * @size: number of elements found in the array
 * @value: value to be searched
 * Return: the first index where value is located
 **/

int binary_search(int *array,size_t size, size_t high, size_t low, int value)
{
	size_t i, mid, high, low;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: array to be searched in
 * @size: number of elements found in the array
 * @value: value to be searched
 * Return: the first index where value is located
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
		return (binary_search(array, i / 2, (i < size - 1) ? i : size - 1, value));
	}
}
