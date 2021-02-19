#include "holberton.h"
/**
 *reverse_array -main entry.
 *void: nothing
 *@a: int  pointer
 *@n: int variable
 *Description: function that reverses the content of an array of integers
 * Return:void
 **/
void reverse_array(int *a, int n)
{
	int *pridir = a; /*posicion inicial*/
	int temp;

	a = a + (n - 1); /*posicion final*/

	while (pridir < a)
	{
		temp = *pridir; /*guardo primer valor*/
		*pridir = *a; /*valor pridir  reemplazado*/
		*a = temp; /* dejo valor del primer*/
		pridir++;
		a--;
	}
}
