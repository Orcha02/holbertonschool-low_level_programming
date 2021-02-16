#include "holberton.h"
/**
 * _puts -  function that prints a string, followed by a new line, to stdout.
 * @str: String
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
