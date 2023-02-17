#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
* main - entry point
*
* description: print lat digit of n
*
* Return: Always 0
*/

int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_dig = n % 10;

	if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_dig == 0)
		printf("Last digit of %d is %d and is and is 0'\nn", n, last_dig);
	else if (last_dig < 6 && last_dig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);

	return (0);
}
