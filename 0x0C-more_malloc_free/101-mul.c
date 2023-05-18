#include "main.h"
/**
 * is_digit - contains digit
 * @st: inputed string
 * Return: 0 if non-digit or 1 if otherwise
 */
int is_digit(char *st)
{
	int a = 0;

	while (st[a])
	{
		if (st[a] < '0' || st[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - length of a string
 * @st: inputed string
 * Return: length of string
 */
int_strlen(char *st)
{
	int a = 0;

	while (st[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - handles main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *x1, x2;
	int l1, l2, l, i, j, k1, k2, *result, z = 0;

	x1 = argv[1], x2 = argv[2];
	if (argc != 3 || !is_digit(x1) || !is_digit(x2))
		errors();
	l1 = _strlen(x1);
	l2 = _strlen(x2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		k1 = x1[l1] - '0';
		j = 0;
		for (l2 = _strlen(x2) - 1; l2 >= 0; l2--)
		{
			k2 = x2[l2] - '0';
			j += result[l1 + l2 + 1] + (k1 * k2);
			result[l1 + l2 + 1] = j % 10;
			j /= 10;
		}
		if (j > 0)
			result[l1 + l2 + 1] += j;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (result[i])
			z = 1;
		if (z)
			_putchar(result[i] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

