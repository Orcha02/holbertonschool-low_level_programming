#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen -main entry.
 *void: nothing
 *@s: char pointer
 *Description: Function that returns the length of a string.
 * Return: void
 **/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
/*\0 is the Null character */
	{
		c++;
	}
	return (c);
}
/**
 *_strcpy -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *Description:copies the string pointed by src to the buffer pointed to by dest
 * Return: void
 **/
char *_strcpy(char *dest, char *src)
{
	{

		int c = 0;

		while (src[c] != '\0')
		{
			dest[c] = src[c];

			c++;
		}
		dest[c] = src[c];


		return (dest);

	}
}
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
/*hacer espacio en memoria*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = NULL;
	my_dog->owner = NULL;
	my_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	my_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (my_dog->owner == NULL || my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strcpy(my_dog->owner, owner);
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	return (my_dog);
}
