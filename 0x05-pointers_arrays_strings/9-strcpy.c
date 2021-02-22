#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - check the code for Holberton School students.
 *
 *@dest: char
 *@src: char
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;

	return (dest);
}
