#include "main.h"

/**
* rev_string - Reverses a string
*
* @s: parameter
*
* Return: void
*/

void rev_string(char *s)
{
	int i, strlen, temp, halfstr;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	strlen = i - 1;
	halfstr = strlen / 2;

	for (i = 0; i <= halfstr; i++)
	{
		temp = s[i];
		s[i] = s[strlen];
		s[strlen] = temp;
		strlen--;
	}
}
