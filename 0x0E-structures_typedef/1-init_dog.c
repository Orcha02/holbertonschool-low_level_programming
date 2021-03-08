#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Function that show a structure
 * @d: struct dog
 * @name: type char
 * @age: type float
 * @owner: type char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
