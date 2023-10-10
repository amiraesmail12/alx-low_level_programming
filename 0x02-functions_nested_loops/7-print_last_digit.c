/**
 * print_last_digit - prints the last digit of a number.
 * @n: number ot print its last digit.
 *
 * Return: the value of the last digit.
 */
#include "main.h"
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
	last_digit *= -1;
_putcahr(last_digit + '0');
return (last_digit);
}
