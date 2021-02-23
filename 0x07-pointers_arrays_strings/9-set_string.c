#include "holberton.h"
/**
 * set_string -  This function sets the value of a pointer to a char.
 * @s: Pointer to pointer
 * @to: Pointer
 * Return: Value 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
