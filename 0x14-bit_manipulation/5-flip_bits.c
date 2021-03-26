#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - function that returns the number of bits you would need
 *@n:bit number in poiunter char
 *@m:is the index, starting from 0 of the bit you want to get
 * Return: 1 if succed -1 otherwise
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
/*With XOR it tells me with 1 which are flipped and with 0 which are not*/
	n = n ^ m;

	while (n > 0)
	{
/*With AND I check which are 1*/
		if (n & 1)
			counter++;
/*With shift right I reduce n by 1*/
/*I want to print only the 1's which are in counter*/
/*I remove the rest which are 0's*/
		n = n >> 1;
	}
	return (counter);
}
