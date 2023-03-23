#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name
*
* @name: parameter for name to be printed
* @f: parameter for function pointer
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(f)(name);
}
