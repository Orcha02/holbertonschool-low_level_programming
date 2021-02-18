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

	for(length = 0; dest[length] != '\0'; length++)
	{

	}
	for(length2 = 0; src[length2] != '\0'; length2++, length++)
		dest[length] = src[length2];
	return (dest);
}
