#ifndef DOG_H
#define DOG_H
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
/**
 * struct dog - structure with information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
