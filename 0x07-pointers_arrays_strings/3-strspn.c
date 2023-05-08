#include "main.h"
/**
 * _strspn - starting point
 * @s: inputed string
 * @accept: new input
 * Return: Always 0(success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (x);
}
