#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Description: 'print hexadecimal numbers in lowercase'
 *
 *	Return: 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
