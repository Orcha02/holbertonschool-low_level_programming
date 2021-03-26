#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: int number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
/*Validate if index is greater than size of bits*/
	if (index > 64)
		return (-1);
/*Right shift the index times and with & if both are 1 return 1*/
	return ((n >> index) & 1);
}
