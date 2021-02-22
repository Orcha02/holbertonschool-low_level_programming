#include "holberton.h"
/**
 * int _strspn - function that gets the length of a prefix substring.
 * @s: pointer s
 * @accept: pointer accept
 *
 * Return:0 Success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] !- '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
