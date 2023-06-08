#include "main.h"

/**
 * flip_bits - displays  the number of bits you
 * would need to flip to get from one number to another
 * @n: inputed first digit
 * @m: inputed second digit
 * Return: number of changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, num = 0;
	unsigned long int present;
	unsigned long int d = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		present = d >> y;
		if (present & 1)
			num++;
	}
	return (num);
}
