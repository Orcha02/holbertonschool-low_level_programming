#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (c = 0; c < size; c++)
	{
/*compara los numeros del main y retorna el indice donde se encuentre*/
		if (cmp(array[c]) != 0)
			return (c);
	}
	return (-1);
}
