#include "holberton.h"
/*
* main -
*
*
* Return: 0 success
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
