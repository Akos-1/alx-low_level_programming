#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number
 * @b: string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int y;

	if (!b)
		return (0);
	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		answer = 2 * answer + (b[y] - '0');
	}
	return (answer);
}
