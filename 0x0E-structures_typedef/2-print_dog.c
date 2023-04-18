#include <stdio.h>
#include "dog.h"
/**
 * print_dog
 * @d: arg
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)\n");
		return;
	}
	printf("Name: %s\nAge: %1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
