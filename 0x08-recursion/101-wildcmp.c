#include "main.h"
/**
 * wildcmp - strings comparism
 * @s1: first inputed string
 * @s2: second inputed string
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '
