#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb:unsigned int
 * @size: unsigned int
 *
 * Return: pointer char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (0);

	arr = malloc(nmemb * size);

	if (arr != NULL)
	{
/*escribo las cadenas en el nuevo array*/
		for (c = 0; c < nmemb * size; c++)
		{
			arr[c] = '\0';
		}
		return (arr);
	}
	else
		return (NULL);
}
