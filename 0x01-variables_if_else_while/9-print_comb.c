#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Description: 'Print all possible combinations of single-digit numbers'
 *
 *	Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');


	return (0);
}
