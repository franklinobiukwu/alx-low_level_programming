#include "main.h"

/**
* _islower - Checks for lowercase character
*
* Return: On success 1
*/

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
