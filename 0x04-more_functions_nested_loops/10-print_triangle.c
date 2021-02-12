#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: int
 *
 * Return: 0 Succes
 */
void print_triangle(int size)
{
	int row, colum, blank;

	blank = size;
	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (colum = 1; colum <= size; colum++)
			{
				if (colum < blank)
					_putchar(' ');
				else
					_putchar('#');
			}
			blank = (blank - 1);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
