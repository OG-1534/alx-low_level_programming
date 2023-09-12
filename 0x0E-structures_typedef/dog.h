#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct that create a dog info
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

