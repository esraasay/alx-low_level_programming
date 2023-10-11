#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a dog's basic Info
 * @name: First Member
 * @age: Second Member
 * @owner: Third Member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

