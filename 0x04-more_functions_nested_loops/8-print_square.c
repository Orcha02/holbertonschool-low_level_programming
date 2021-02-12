#include "holberton.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square
 *
 * Return: 0 Succes
 */
void print_square(int size)
{
	int row, colum;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (colum = 0; colum < size; colum++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
			_putchar('\n');
}
