#include "main.h"


/**
 * _atoi - convert string to integer
 *
 * @str: string to be converted
 *
 * Return: integer on success or
 * -1 if string contains alphabet or minus sign
 */

int _atoi(char *str)
{
	int num, n, i = 0;
	char c, C;



	if (str == NULL)
		return (-1);
	/*check if string contains alphabet or negative sign*/
	while(str[i])
	{
		for(c = 'a', C = 'A'; c <= 'z' && C <= 'Z'; c++, C++)
		{
			if (str[i] == c || str[i] == C || str[i] == '-')
				return (-1);
			continue;
		}
		i++;
	}

	/*convert numeric string to integer*/
	i = 0;
	while(str[i])
	{
		n = (10 * i);
		if (n == 0 && i == 0)
			n = 1;
		num+= (n) * (str[i] - '0');
		i++;
	}

	return (num);
}
