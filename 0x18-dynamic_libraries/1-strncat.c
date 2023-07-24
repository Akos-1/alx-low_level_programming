#include "main.h"
/**
 * _strncat - two strings are concatenated
 * using most n bytes from src
 * @dest: value to be inputed
 * @src: value to be inputed
 * @n: value to be inputed
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
