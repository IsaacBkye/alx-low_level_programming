#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
/**
 * struct dog - Dog struct
 * @name: arg1
 * @age: arg2
 * @owner: arg3
 * Description: structs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct _dog - Dog Struct
 * @name: arg
 * @age: arg1
 * @owner: arg2
 * Description: structs
 */
typedef struct _dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
