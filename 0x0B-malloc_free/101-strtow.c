#include "main.h"
#include <stdlib.h>

/**
 * count_words - count number of words contained in a string
 * @x: string
 * Return: number of words
 */
int count_words(char *x)
{
	int a, b, c;

	a = 0, c = 0;
	for (b = 0; x[b] != '\0'; b++)
	{
		if (x[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * **strtow - string is splitted into words
 * @str: inputed string
 * Return: pointer to a string(success)
 * or NULL if not
 */
char **strtow(char *str)
{
	char **m, *n;
	int i, j = 0, len = 0, words, x = 0, k, l;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				l = i;
				n = (char *) malloc(sizeof(char) * (x + 1));
				if (n == NULL)
					return (NULL);
				while (k < l)
					*n++ = str[k++];
			*n = '\0';
			m[j] = n - x;
			j++;
			x = 0;
		}
	}
	else if (x++ == 0)
		k = i;
}
m[j] = NULL;
return (m);
}
