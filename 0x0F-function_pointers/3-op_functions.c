#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - sub numbers
 * @a: first num
 * @b: second num
 *
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - product of numbers
 * @a: first num
 * @b: second num
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of numbers
 * @a: first num
 * @b: second num
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod -  remainder of the division of a by b
 * @a: first num
 * @b: second num
 *
 * Return:  remainder of the division of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
