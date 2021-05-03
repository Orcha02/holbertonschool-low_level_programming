#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: External input
 *
 * Return: 0 success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
