#include "holberton.h"
/**
 * print_most_numbers - prints from 0 to 9 and a new line
 *
 *
 * Return: 0 Success
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		if (n != '2' && n != '4')
			_putchar (n);
	_putchar('\n');
}
