/**
 * print_dog -  prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: 0
 */
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %s\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
}
