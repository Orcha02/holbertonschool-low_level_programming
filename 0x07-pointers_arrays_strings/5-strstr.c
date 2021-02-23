#include <stdio.h>
#include "holberton.h"
/**
 **_strstr -main entry.
 *@haystack:char pointer
 *@needle: char variable
 *Description: func finds first occurrence of substring needle in string hay
 * Return:char pointer
 **/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (h != '\0')
	{
		if (h == n)
		{
			return (h);
		}
		h++;
	}
	return ('\0');
}
