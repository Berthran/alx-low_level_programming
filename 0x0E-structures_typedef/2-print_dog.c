#include "dog.h"
#include <stdio.h>

/**
 * print_dog - displays the values of the members of a structure
 * @d: pointer to struct type
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	struct dog *pdog;

	pdog = d;

	if (d != NULL)
	{
		if (pdog->name)
			printf("Name: %s\n", pdog->name);
		else
			printf("Name: (nil)\n");
		if (pdog->age)
			printf("Age: %.6f\n", pdog->age);
		else
			printf("Age: 0.000000\n");
		if (pdog->owner)
			printf("Owner: %s\n", pdog->owner);
		else
			printf("Owner: (nil)\n");
	}
}
