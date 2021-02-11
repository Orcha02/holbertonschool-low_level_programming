#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14 and a new line
 *
 *
 * Return: 0 Success
 */
void more_numbers(void)
{
	int n, times;

	for (times = 0; times <= 10; times++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
