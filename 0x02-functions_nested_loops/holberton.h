#ifndef HOLBERTON_H
#define HOLBERTON_H

/*prints a char stdout*/
int _putchar(char c);

/*prints alphabet a lowercase*/
void print_alphabet(void);

/*prints alphabet 10 times*/
void print_alphabet_x10(void);

/*function that checks for lowercase character.*/
int _islower(int c);

/*function that checks for alphabetic character.*/
int _isalpha(int c);

/*function that prints the sign of a number.*/
int print_sign(int n);

/*function that computes the absolute value of an integer.*/
int _abs(int);

/*function that prints the last digit of a number.*/
int print_last_digit(int);

/*function that prints every minute of the day, starting from 00:00 to 23:59.*/
void jack_bauer(void);

/*function that prints the 9 times table, starting with 0.*/
void times_table(void);

/*function that adds two integers and returns the result.*/
int add(int, int);
#endif
