#include <stdio.h>
#include "holberton.h"
/**
 * int_to_bi - Functiont that print binary given unsigned int.
 * @n: unsigned int given.
 */

void int_to_bi(unsigned long int n)
{
	if (n == 0)
		return;
/*Enter function and remove last one*/
	int_to_bi(n >> 1);
/*To compare if is 1*/
	_putchar((n & 1) + '0');
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: int number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');

	else
		int_to_bi(n);
}
