#include "holberton.h"
/**
 *check_prime_number -main entry.
 *@x:int
 *@y:int
 *Description:aux func to find if a number is prime
 * Return:1 if x is prime
 **/
int check_prime_number(int x, int y)
{
	if (x < 2)
		return (0);
	if (y * y > x)
		return (1);
	if (x % y == 0)
		return (0);
	else
		return (check_prime_number(x, y + 1));
}
#include "holberton.h"
/**
 *is_prime_number -main entry.
 *@n:char pointer
 *Description:Function that checks if a number is a prime number
 * Return:1 if is prime otherwise return 0
 **/
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
