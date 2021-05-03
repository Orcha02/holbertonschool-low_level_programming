#include "headers.h"
/**
 * add - Adds a + b
 * @a: int
 * @b: int
 * Return: 0
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Substraction between a - b
 * @a: int
 * @b: int
 * Return: 0
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies a * b
 * @a: int
 * @b: int
 * Return: 0
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides a / b
 * @a: int
 * @b: int
 * Return: 0
 */
int div(int a, int b)
{
	if (b <= 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - Module of  a % b
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */
int mod(int a, int b)
{
	if (b <= 0)
	{
		return (a);
	}
	return (a % b);
}
