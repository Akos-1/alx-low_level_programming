#include "main.h"
/**
 * string_nconcat - two strings are concatenated
 * @s1: first inputed string
 * @s2: second inputed string
 * @n: index
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (n > y)
		n = y;
	a = malloc((x + n + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	for (z = 0; z < x; z++)
	{
		a[z] = s1[z];
	}
	for (; z < (x + n); z++)
	{
		a[z] = s2[z - x];
	}
	a[z] = '\0';
	return (a);
}
