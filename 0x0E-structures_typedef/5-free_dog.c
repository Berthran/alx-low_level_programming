#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: pointer
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	struct dog *pdog;

	pdog = malloc(sizeof(d));

	if (pdog != NULL)
		free(pdog);
}
