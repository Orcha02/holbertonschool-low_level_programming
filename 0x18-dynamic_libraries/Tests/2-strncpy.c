#include "holberton.h"
/**
 * *_strncpy - function that copies a string.
 * @dest: Array with the string source
 * @src: pointer where the text is append
 * @n: num of bytes to be append from src
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != 0; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
