#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer s
 * @accept: pointer accept
 *
 * Return:0 Success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
