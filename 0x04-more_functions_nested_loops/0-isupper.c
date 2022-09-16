#include "main.h"
#include<stdio.h>

/**
 * main - check the code.
 *
 * return: always 0.
 */
int main(void)
{
	char c;

	c= 'A';
	putchar("%c: %d\n", c, _isupper(c));
	c= 'a';
	putchar("%c: %d\n" ,c, _isupper(c));
	return (0);
}
