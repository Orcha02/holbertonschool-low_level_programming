#include <stdio.h>
#include "function_pointers"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array != NULL && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}
