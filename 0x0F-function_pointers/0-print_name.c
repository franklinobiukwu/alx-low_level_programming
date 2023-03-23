#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
*
* @name: parameter for name to be printed
* @f: parameter for function pointer
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
