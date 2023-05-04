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
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyxabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data1[y])
			{
				s[x] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
