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

	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j == *haystack && *j != '\0' && *haystack != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
			return (i);
		haystack = i + 1;
	}
	return (0);
}
