#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: struct
 *@name: string
 *@age: not an int
 *@owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
