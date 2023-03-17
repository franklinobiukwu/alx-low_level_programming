#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: first string parameter
* @s2: second string parameter
* @n: size of s2 to be returned
*
* Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int ls1, ls2, blck_size, i, j;
	/*count string s1 and s2*/
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		continue;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		continue;
	/*assign string length of s2 to n if n greater or equal to s2*/
	if (n >= ls2)
		n = ls2;
	/*sum length of s1 and s2 to determing total memory needed*/
	blck_size = ls1 + ls2;
	/*allocate memory of size blck_size + 1 for null character*/
	ptr = malloc(blck_size * sizeof(char));
	/*return NULL if memory allocation fails*/
	if (ptr == NULL)
		return (NULL);
	/*copy s1 and s2 to ptr*/
	for (i = 0; i < ls1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	/*insert NULL character*/
	ptr[i + j] = '\0';

	return (ptr);
}
