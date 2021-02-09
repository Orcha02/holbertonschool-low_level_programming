#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 *
 * Return: 0 success
 */
void jack_bauer(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = '0'; num1 <= '2'; num1++)
		for (num2 = '0'; num2 <= '3'; num2++)
			for (num3 = '0'; num3 <= '5'; num3++)
				for (num4 = '0'; num4 <= '9'; num4++)
				{
					if (!(num1 == '2' && num2 == '4'))
					{
						_putchar(num1);
						_putchar(num2);
						_putchar(':');
						_putchar(num3);
						_putchar(num4);
						_putchar('\n');
					}
				}
}
