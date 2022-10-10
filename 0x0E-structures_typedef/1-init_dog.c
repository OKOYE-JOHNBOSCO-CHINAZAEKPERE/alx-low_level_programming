#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer variable of type struct dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
