#include "holberton.h"
/**
 *_islower - function that checks for lowercase character.
 * @c: external input
 *
 * Return: 0 succes
 */
int _islower(int c)
{
	if (c >= 'a' && 'c' <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
