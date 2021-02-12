#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 *
 * Return: 0 Success
 */
void print_diagonal(int n)
{
	int row, colum;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (colum = 0; colum < n; colum++)
			{
				if (row > colum)
					_putchar(' ');
				if (row == colum)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
		else
			_putchar('\n');
}
