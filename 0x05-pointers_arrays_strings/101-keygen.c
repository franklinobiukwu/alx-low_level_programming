#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: Program that generates random valid passwords for the program
* 101-crackme
*
* Return: 0 Always
*/

int main(void)
{
	srand(time(NULL));
	printf("%d", rand());


	return (0);
}
