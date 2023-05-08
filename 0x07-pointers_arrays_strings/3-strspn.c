#include "main.h"
/**
 * _strspn - starting point
 * @s: inputed string
 * @accept: new input
 * Return: Always 0(success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (x);
}
