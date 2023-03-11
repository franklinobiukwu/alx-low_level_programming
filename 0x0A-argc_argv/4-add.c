#include <stdio.h>

/**
* main - add all positive numbers
*
* @argc: argument count
* @argv: pointer to array of argument vectors
*
* Return: 0 on Success, 1 on Error
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0");
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (argv[i] >= 0)
				sum += argv[i];
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}

	return (0);
}
