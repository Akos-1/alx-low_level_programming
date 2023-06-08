#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index is set
 * @n: pointer
 * @index: bit index
 * Return: 1 if successfully, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}

