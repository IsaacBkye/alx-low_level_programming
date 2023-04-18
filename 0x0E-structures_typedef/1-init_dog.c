#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialize dog struct
 * @d: arg
 * @name: arg1
 * @age: arg2
 * @owner: arg3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
