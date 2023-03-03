#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
*
* @a: first parameter
* @n: second parameter
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, hld;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		hld = a[i];
		a[i] = a[n];
		a[n] = hld;

		n--;
	}
}
