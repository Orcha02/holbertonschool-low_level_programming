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

	while (*s != '\0')
	{
		charCount++;
		s++;
	}
	return (charCount);
}

/**(It can also be done with for:

	for (charCount = 0; s[charCount] != '\0'; charCount++)
	{}
	return (charCount);
*/
}
