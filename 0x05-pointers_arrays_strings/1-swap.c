#include "holberton.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: Value of integer
 * @b: Value of integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
