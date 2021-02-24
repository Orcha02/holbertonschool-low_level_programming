#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: int
 *
 * Return: 0 success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
