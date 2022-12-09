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
	char charType;
	int intType;
	long int longType;
	long long int longLongIntType;
	float floatType;

	printf("Size of char type is %lu bytes\n", sizeof(charType));
	printf("Size of integer type is %lu bytes\n", sizeof(intType));
	printf("Size of long int type is %lu bytes\n", sizeof(longType));
	printf("Size of long long int type is %lu bytes\n", sizeof(longLongIntType));
	printf("Size of float type is %lu bytes\n", sizeof(floatType));

	return (0);
}
