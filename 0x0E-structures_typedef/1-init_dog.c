#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
*
* @d: pointer to dog struct
* @name: name of dog
* @age: age of dog
* @owner: dog owner
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d.name = name;
	*d.age =age;
	*d.owner = owner;
}