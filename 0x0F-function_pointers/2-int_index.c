#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to search on
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: 0 if matched, 1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return(i);
	}
}
return (-1);
}
