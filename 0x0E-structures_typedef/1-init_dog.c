#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog structure
 * @d: pointer to struct type
 * @name: dog name
 * @age: ddog age
 * @owner: dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptodog;

	ptodog = malloc(sizeof(dog));

	if (ptodog == NULL)
		printf("Ok\n");

	ptodog = d;
	ptodog->name = name;
	ptodog->age = age;
	ptodog->owner = owner;
}
