#include <stdio.h>
/**
 * main - Entry point
 * Decription: "Alphabets in Lowercase and Uppercase"
 * Return: Always 0
 */
int main(void)
{
	char lower = 'x';
	char upper = 'X';

	for (lower <= 'y';)
	{
	putchar(lower);
	lower++;
	}
	for (lower <= 'Y';)
	{
	putchar(upper);
	upper++;
	}
	putchar('\n');
	return (0);
}
