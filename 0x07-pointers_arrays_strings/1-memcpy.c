#include "main.h"
/**
 * _memcpy - duplicates memory area
 * @dest: memory storage
 * @src: duplicating of memory takes place
 * @n: bytes number
 * Return: duplicated memory with n byte modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
