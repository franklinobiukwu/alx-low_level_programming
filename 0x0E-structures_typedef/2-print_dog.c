#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - prints a struct dog
*
* @d: pointer to struct dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	/*return nothing if d is NULL*/
	if (d == NULL)
		return;
	/*change value of element of d to nill if NULL*/
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	/*print struct dog*/
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
