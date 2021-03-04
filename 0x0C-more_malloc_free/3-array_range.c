#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *array;
	int c;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc (sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (c = 0; min <= max; c++, min++)
	{
		array[c] = min;
	}
	return(array);
}
