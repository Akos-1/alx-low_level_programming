#include "main.h"
/**
 * _memset - memory with a constant byte
 * @s: memory area
 * @b: specific bytes
 * @n: number of bytes of memory area
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
