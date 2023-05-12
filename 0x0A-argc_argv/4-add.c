#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - print the sum of two positive numbers.
*@argc: argument count or size of arguments.
*@argv: argument vector
*Return: 1 for less of 2 arguments or nondigit numbers, 0 success
*/

int main(int argc, char **argv)
{
	int sum, x, y;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

