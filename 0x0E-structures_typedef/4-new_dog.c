#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
*
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return:
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_bingo;

	/*initialize values struct dog_t*/
	strcpy(new_bingo->name, name);
	new_bingo->age = age;
	strcpy(new_bingo->owner, owner);

	return (new_bingo);
}
