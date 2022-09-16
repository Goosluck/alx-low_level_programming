#include "main.h"
#include<stdio.h>
#include<ctype.h>

/**
 * main - check the code.
 *
 * return: 0 or 1;
 */
int main(void)
{
	char c;

	c= 'A';
	printf("%c: %d\n", c, isupper(c));

	c= 'a';
	printf("%c: %d\n" ,c, isupper(c));

	return (0);
}
