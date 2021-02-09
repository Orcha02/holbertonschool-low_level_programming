#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times lowercase alphabetand then a new line.
 *
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{

	char alphabet;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
