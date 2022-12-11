#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Description: 'A program that prints the alphabet in lowercase'
 *
 *	Return: 0 (Success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
