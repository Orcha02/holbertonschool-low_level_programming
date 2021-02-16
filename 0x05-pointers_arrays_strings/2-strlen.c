#include "holberton.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int charCount;

	for (charCount = 0; s[charCount] != '\0'; charCount++)
	{}
	return (charCount);
}
