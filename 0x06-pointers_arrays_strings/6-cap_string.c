#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @st: string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *st)
{
	int x = 0;
	int y;
	int st[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(st + x) >= 97 && *(st + x) <= 122)
		*(st + x) = *(st + x) - 32;
	x++;
	while (*(st + x) != '\0')
	{
		for (y = 0; y < 13; y++)
		{
			if (*(st + x) == st[y])
			{
				if ((*(s + (x + 1)) >= 97) && (*(st + (x + 1)) <= 122))
					*(st + (x + 1)) = *(st + (x + 1)) - 32;
				break;
			}
		}
		x++;
	}
	return (st);
}
