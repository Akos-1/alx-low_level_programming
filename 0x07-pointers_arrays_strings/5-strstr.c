#include "main.h"
/**
 * _strstr - points a substring
 * @haystack: points to a character
 * @needle: points to a character
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *three = haystack;
		char *four = needle;

		while (*three == *four && *four != '\0')
		{
			three++;
			four++;
		}
		if (*four == '\0')
			return (haystack);
	}
	return (0);
}
