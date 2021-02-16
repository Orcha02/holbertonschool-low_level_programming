#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: String
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
