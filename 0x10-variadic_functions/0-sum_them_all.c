#include  <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: const unsigned int.(const) means we can change the value
 * Return: int sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;/*For iterating the argument*/
	int sum = 0;
	unsigned int counter;

	if (n == 0)
		return (0);

	va_start(my_list, n);/*To initialize argument list*/
	for (counter = 0; counter < n; counter++)
	{
		sum = sum + va_arg(my_list, int);/*gets next argument value*/
	}
	va_end(my_list);/*Frees va_list (cleans up)*/
	return (sum);
}
