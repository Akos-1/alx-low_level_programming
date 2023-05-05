#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int x;
	int y;

	char *m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; m[y] != '\0'; y++)
		{
			if (s[x] == m[y])
			{
				s[x] = n[y];
				break;
			}
		}
	}
	return (s);
}
