#include <stdio.h>

/**
* main - entry point
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 success
*/

int main(int argc, argv)
{
	int product;

	product = argv[argc - 2] * argv[argc - 1];

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d", product);
	return (0);
}
