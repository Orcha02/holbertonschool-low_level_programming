#include <stdio.h>
#include "holberton.h"
/**
 **_strstr -main entry.
 *@haystack:char pointer
 *@needle: char variable
 *Description: func finds first occurrence of substring needle in string hay
 * Return:char pointer
 **/
int _strcmp(char *s1, char *ned)
{
	int i = 0;
/* First I compared both strings*/
	while (s1[i] == ned[i])
	{
		if (ned[i + 1] == '\0' && s1[i + 1] != '\0')
			return(0);
		if (s1[i] == '\0' && ned[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - ned[i]);
}

char *_strstr(char *haystack, char *needle)
{
/*Function to find first occuerence of the subtring*/
	char *h = haystack;
	char *n = needle;

	if (needle == NULL)
		return (NULL);
	while (h != '\0')
	{
		if (*h == *n)
		{
			if (_strcmp(h, n) == 0)

				return (h);
		}
		h++;
	}
	return ('\0');
}
