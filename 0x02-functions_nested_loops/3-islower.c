/**
 * _islower - checks for lowercase character.
 * @c: character to checked
 *
 * Return: 1 if c is lowercase, 0 or=therwise.
 */
#include "main.h"
int _islower(int c)
{
if (c >= 'a' || c <= 'z')
	return (1);
else
	return (0);
}
