#include "main.h"
/**
 * strstr - points a substring
 * haystack: pointer to a character
 * needle: pointer to  a character
 * Return: pointer at the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] != haystack[x + y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
			return (haystack + x);
	}
	return (0);
}
