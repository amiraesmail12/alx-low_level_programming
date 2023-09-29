/**
 * strlen_recursion - return length of string
 * @s: string to calculate the length of
 *
 * Return: length of the string.
 */
#include "main.h"
int _strlen_recursion(char *s)
{
if (*s == '\n')
{
	return 0;
}
return (1 + _strlen_recursion(s + 1));
}
