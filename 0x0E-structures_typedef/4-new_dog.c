#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - funtion name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *pdog;

	pdog = malloc(sizeof(struct dog));

	if (pdog == NULL)
		return (NULL);

	pdog->name = name;
	pdog->owner = owner;
	pdog->age = age;
	return (pdog);
}
