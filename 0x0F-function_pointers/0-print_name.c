#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name
*
* @name: parameter for name to be printed
* @f: parameter for function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
