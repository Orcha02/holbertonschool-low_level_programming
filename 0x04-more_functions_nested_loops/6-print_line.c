#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 *
 * Return: 0 Success
 */
void print_line(int n)

{
	int cycle;

	if (n > 0)
	{
		for (cycle = 0; cycle < n; cycle++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
