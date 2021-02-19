#include "holberton.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, length2;

	length = 0;
	while (dest[length] != '\0')
		length++;

	length2 = 0;
	while (src[length2] != '\0')
	{
		dest[length] = src[length2];
		length++;
		length2++;
	}
	dest[length] = '\0';
	return (dest);
}
