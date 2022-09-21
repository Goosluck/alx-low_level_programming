#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign random numbers
 *
 * return Always 0;
 */

int main(void)

{

	int l;

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, l);
	}
	else
	{
		printf("NaN\n");
	}
	return (0);
}
