#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 *
 * Return: 0 success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
