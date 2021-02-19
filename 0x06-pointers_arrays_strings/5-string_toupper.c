#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 *
 *@s:char
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
