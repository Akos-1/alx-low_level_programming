#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: number of inputed value
 * Return: n value
 */
char *leet(char *n)
{
	int num = 0, y;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int s3[] = {52, 51, 48, 55, 49};

	while (*(n + num) != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (*(n + num) == s1[y] || *(n + num) == s2[y])
			{
				*(n + num) = s3[y];
				break;
			}
		}
		num++;
	}
	return (n);
}
