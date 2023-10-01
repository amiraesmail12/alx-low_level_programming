int act_prime(int n, int i);
/**
 * is_prime_number - check if the integer is a prime or not.
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime, 0 if not
 */
#include "main.h"
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (act_prime(n, n - 1));
}
/**
 * act_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int act_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (act_prime(n, i - 1));
}
