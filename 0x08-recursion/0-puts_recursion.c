/**
 * _puts_recursion - print string with a new line
 * @s: string to pointer
 * Return: void
 */
#include "main.h"
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(*s + 1);
}
else
{
	_putchar('\n');
}
}
