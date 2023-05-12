#include "main.h"

/**
 * _isupper - Uppercase character
 *  @c: The character to be detected
 *  Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
