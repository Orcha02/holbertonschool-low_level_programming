#include <stdio.h>
#include "holberton.h"
/**
 *clear_bit - function that set the value 0  a bit at a given index.
 *@n:bit number in poiunter char
 *@index:is the index, starting from 0 of the bit you want to get
 * Return: 1 if succed -1 otherwise
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
/*Validate if index is greater than size of bits*/
	if (index > 64)
		return (-1);
	/*Create mask of 1*/
	/*Left shift the index times and set to 0*/
/*with ~ to invert and & we make sure is 0 the one we want to set to 0*/
	mask = mask << index;
	*n = (~mask & *n); /*negate mask, then I apply &*/
	return (1);
}
