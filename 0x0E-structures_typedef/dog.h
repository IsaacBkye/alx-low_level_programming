#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
/**
 * dog - Dog struct
 * @name: arg1
 * @age: arg2
 * @owner: arg3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct _dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
