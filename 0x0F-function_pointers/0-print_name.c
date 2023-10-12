#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: apointer to array of names
 * @f: a pointer to a printing function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
	return;
f(name);
}
