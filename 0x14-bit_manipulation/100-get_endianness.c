#include "main.h"

/**
 * get_endianness - the endianness is checked
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
