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
for (i=0; i<n; i++)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
}
return (_sqrt_recursion(n));
}
