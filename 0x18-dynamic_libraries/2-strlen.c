#include "main.h"
/**
 * _strlen - length of the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
