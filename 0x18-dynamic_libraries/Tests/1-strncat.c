#include "holberton.h"
/**
 * *_strncat - function that concatenates two strings.
 * @src: char
 * @dest: char
 * @n: integer variable
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, c;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (c = 0; c < n; c++, length++)
		dest[length] = src[c];
	return (dest);
}
