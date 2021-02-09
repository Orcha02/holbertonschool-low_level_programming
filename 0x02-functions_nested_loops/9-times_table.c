#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int row, col, mult;
	short int uni, dec;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mult = row * col;
			uni = mult % 10;
			dec = mult / 10;
			if (dec == 0)
				_putchar(' ');
			else
				_putchar (dec + '0');
			_putchar (uni + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
