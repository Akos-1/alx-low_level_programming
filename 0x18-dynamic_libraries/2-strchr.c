#include "main.h"
/**
 * _strchr - starting point
 * @s: string inputed
 * @c: character inputed
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
