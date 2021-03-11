#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function that add 2 integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts 2 integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies 2 integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides 2 integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that returns module of 2 integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
