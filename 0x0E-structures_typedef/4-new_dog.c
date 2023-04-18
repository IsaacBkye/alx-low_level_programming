#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: arg
 * @age: arg1
 * @owner: arg2
 * Return: a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct _dog *a = malloc(sizeof(dog_t));

	if (a == NULL)
		return (NULL);
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
