#include <stdio.h>
/**
 * main - Entry point
 * Description: ' different combinations of two digits'
 * Return: always 0
 */
int main(void)
{
	int Num1, Num2;

	for (Num1 = 0; Num1 < 9; Num1++)
	{
		for (Num2 = Num1 + 1; Num2 < 10; Num2++)
		{
			putchar((Num1 % 10) + '0');
			putchar((Num2 % 10) + '0');

			if (Num1 == 8 && Num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
