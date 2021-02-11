#include "holberton.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 *
 * Return: 0 Success
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar ('\n');
}
