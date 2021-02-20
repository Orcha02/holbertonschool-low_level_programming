#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j;
	char sl[] = {' ', '\n', '\t', ',', ';', '.',
		     '!', '?', '"', '(', ')', '}', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		for (j = 0; sl[j] != '\0'; j++)
		{
			if (str[i] == sl[j])
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				i--;
			}
		}
	}
	return (str);
}
