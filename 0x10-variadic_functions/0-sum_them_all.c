#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: number og arguments
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
va_start(args, n);
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
	sum += va_arg(args, int);
}
va_end(args);
return (sum);

}
