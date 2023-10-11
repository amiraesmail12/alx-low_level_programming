#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog's data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /*_DOG_H_*/
