#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays it's opcodes
 * @argc: inputed arguments
 * @argv: array of inputed arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size, a;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;
	for (a = 0; a < size; a++)
	{
		if (a == size - 1)
		{
			printf("%02hhx\n", ar[a]);
			break;
		}
		printf("%02hhx", ar[a]);
	}
	return (0);
}
