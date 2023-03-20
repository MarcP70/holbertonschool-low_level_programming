#ifndef DOG_H
#define DOG_H

/* Structures */
/**
 * struct dog - Dog description
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Description: Differents elements to categorize a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Functions prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
