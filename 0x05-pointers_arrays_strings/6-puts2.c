#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: String
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int size = 0;

	while (str[size])
		size++;

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	printf("%d\n", i);
}
