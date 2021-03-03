#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 *
 * Return: char pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
/*Llenamos el array*/
	for (i = 0 ; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
