#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if (!array || !action)
	return;
for (i = 0; i < size; i++)
	action(i);
}
