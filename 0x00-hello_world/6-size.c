#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Description: 'size is not grandeur'
 *
 *	Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	double doubleType;

	printf("Size of integer type is %lu bytes\n", sizeof(intType));
	printf("Size of integer type is %lu bytes\n", sizeof(charType));
	printf("Size of integer type is %lu bytes\n", sizeof(floatType));
	printf("Size of integer type is %lu bytes\n", sizeof(doubleType));

	return (0);
}
