#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a var of type struct dog
 * @d: points to struct dog
 * @name: points to a char
 * @age: float
 * @owner: points to a char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
