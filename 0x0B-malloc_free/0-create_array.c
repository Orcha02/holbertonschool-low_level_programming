#include "holberton.h"
/**
 * create_array - creates an array of chars
 * initializes it with a specific char.
 *
 * @size: unsigned int
 * @c: char to print
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(int));
	if (p == 0)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
		*(p + i) = c;/* p[i] = c*/
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
	free(p);
}
