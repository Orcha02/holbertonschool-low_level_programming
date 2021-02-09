#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: int
 *
 * Return: 0 success
 */
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = (i % 10);
	if (lastdigit < 0)
	{
		_putchar((-1 * lastdigit) + '0');
		return (-1 * lastdigit);
	}
	else
	{
		_putchar((lastdigit) + '0');
		return (lastdigit);
	}
}
