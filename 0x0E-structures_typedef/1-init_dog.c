/**
 * init_dog - initialize a variable of type struct dog
 * @d: pionter to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: 0
 */
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
