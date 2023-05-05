#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* error98 - print error and exit with status 98
*
* Description: prints error and ext with status 98
*
* Return: void
*/

void error98()
{
	printf("Error\n");
	exit(98);
}


/**
* main - Entry point
*
* Description: multiply two positive numbers
*
* Return:0 on success
*/

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;
	char *endptr1;
	char *endptr2;
	long int num1;
	long int num2;
	long int mul;

	/*print error followed by a new line if argc is not 3 and exit with 98*/
	if (argc != 3)
		error98();
	/*assign first value of argv to num1 and second vale to num two*/
	str1 = argv[1];
	str2 = argv[2];
	/*print error followed by newline if num1 & num2 is not composed of digit only*/
	num1 = strtol(str1, &endptr1, 10);
	num2 = strtol(str2, &endptr2, 10);
	/*print error if num1 and num2 is not composed of only digit and exit with 98*/
	if (*endptr1 || *endptr2)
		error98();
	/*multiply num1 and num2 and assign to mul*/
	mul = num1 * num2;
	/*print mul followed by a new line*/
	printf("%ld\n", mul);
}
