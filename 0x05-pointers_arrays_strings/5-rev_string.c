#include "holberton.h"
/**
 * rev_string - function that reverses a string.
 * @s: string (char)
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int a, b;
	int count = 0;

	for (b = 0; s[b] != 0; b++)
	{
	}
	for (a = 0; a < b / 2; a++)
	{
		count = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = count;
		a++;
	}
}
