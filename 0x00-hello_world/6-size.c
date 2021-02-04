#include <stdio.h>
/**
 * main - prints the size of various types
 *
 *
 * Return: 0 success
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
