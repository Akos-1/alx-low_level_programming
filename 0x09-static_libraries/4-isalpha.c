#include "main.h"
/**
 * _isalpha - either lowercase or uppercase
 * @c: character to check if lowercase
 * Return: 1 if lowercase or uppercase, and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
