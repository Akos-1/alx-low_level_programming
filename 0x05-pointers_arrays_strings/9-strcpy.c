#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}
