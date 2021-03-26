#include <stdio.h>
#include "holberton.h"
/**
 *set_bit - function that set the value of a bit at a given index.
 *@n:bit number in poiunter char
 *@index:is the index, starting from 0 of the bit you want to get
 * Return: 1 if succed -1 otherwise
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
/*Validate if index is greater than size of bits*/
	if (index > 64)
		return (-1);
	/*Create mask of 1*/
/*Left shift mask the index times and set to 1 with | even if it is 0 or 1*/
	mask = mask << index;
	*n = (mask | *n);
	return (1);

}
