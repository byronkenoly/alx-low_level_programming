#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - basic dog structure
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Description: dog properties
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
