#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse, then a new line.
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int charCount = 0;

{
	while (*s != '\0')
	{
		s++;
		charCount++;
	}
	while (charCount != 0)
	{
		s--;
		charCount--;
		_putchar(*s);
	}
	_putchar('\n');
}
}
