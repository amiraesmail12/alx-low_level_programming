/**
 * print_sign - prints the sign of a number.
 * @n: num to print his sign
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero,
 * -1 if n is less than zero.
 */
#include "main.h"
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else if (n < 1)
{
	_putchar('-');
	return (-1);
}
}
