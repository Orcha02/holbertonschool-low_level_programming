#include "holberton.h"
/**
 * leet - main entry | function that encodes a string
 * void: nothing
 * @a:char pointer
 *
 *Return: 0
 */
char *leet(char *a)
{
	int c, c2;
	char lc[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = { '4', '3', '0', '7', '1'};

	for (c = 0; a[c] != '\0'; c++)
	{
		for (c2 = 0; lc[c2] != '\0'; c2++)
		{
			if ((a[c] == lc[c2]) || (a[c] == lc[c2] - 32))
			{
				a[c] = num[c2];
			}
		}
	}
	return (a);
}
