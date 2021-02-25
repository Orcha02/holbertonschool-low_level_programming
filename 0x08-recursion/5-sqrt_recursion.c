#include "holberton.h"
/**
 * recorrer - recorre los numeros
 * @n: get a number
 * @a: get a number
 * Return: return a number
 */
int recorrer(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (recorrer(n, a + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: get a number
 * Return: return a number
 */
int _sqrt_recursion(int n)
{
	return (recorrer(n, 1));
}
