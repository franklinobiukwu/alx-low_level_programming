#include "main.h"

/**
* infinite_add - add two numbers
*
* @n1: first parameter
* @n2: second parameter
* @r: third parameter
* @size_r: fourth parameter
*
* Return: character
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int i, j;
	long int nn1, nn2, res;

	for (i = 0; n1 != '\0'; i++)
	{
		if (i == 0)
			nn1 += (n1[i] - '0');
		else if (i > 0)
			nn1 = (nn1 * 10) + (n1[i] - '0');
	}

	for (i = 0; n2 != '\0'; i++)
	{
		if (i == 0)
			nn2 += (n2[i] - '0');
		else if (i > 0)
			nn2 = (nn2 * 10) + (n2[i] - '0');
	}

	res = nn1 + nn2;

	if (res / size_r <= 1)
		return (res);
	else if
		return (0);
}
