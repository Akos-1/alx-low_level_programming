#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @st: string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *st)
{
	int x = 0;

	while (st[x])
	{
		while (!(st[x] >= 'a' && st[x] <= 'z'))
			x++;
		if (st[x - 1] == ' ' ||
				st[x - 1] == '\t' ||
				st[x - 1] == '\n' ||
				st[x - 1] == ',' ||
				st[x - 1] == ';' ||
				st[x - 1] == '.' ||
				st[x - 1] == '!' ||
				st[x - 1] == '?' ||
				st[x - 1] == '"' ||
				st[x - 1] == '(' ||
				st[x - 1] == ')' ||
				st[x - 1] == '(' ||
				st[x - 1] == ')' ||
				x == 0)
			st[x] -= 32;
		x++;
	}
	return (st);
}
