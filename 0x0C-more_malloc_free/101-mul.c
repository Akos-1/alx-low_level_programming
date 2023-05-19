#include "main.h"
/**
 * is_digit - contains digit
 * @s: inputed string
 * Return: 0 if non-digit or 1 if otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (st[i] < '0' || st[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - length of a string
 * @s: inputed string
 * Return: length of string
 */
int_strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
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
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, z = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
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

