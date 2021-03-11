#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - contains the function that will perform
 * the operation ask by the user
 * @s: pointer to function
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	  {"+", op_add};
	  {"-", op_sub};
	  {"*", op_mul};
	  {"/", op_div};
	  {"%", op_mod};
	  {NULL, NULL}
	};
	int i;
}
