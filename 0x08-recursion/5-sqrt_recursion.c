/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root of
 *
 * Return: the result of square root
 */
#include "main.h"
int _sqrt_recursion(int n)
{
int i = 0;
int res;
if (n < 0)
	return (-1);
res = i * i;
if (res > n)
	return (-1);
if (res == n)
	return (i);
i++;
return (_sqrt_recursion(n));
}
