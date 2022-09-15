#include<stdio.h>
/**
 *main - print sizeof
 *description:  program that prints the size of various types on the computer it is compiled and run on.
 *
 * return 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("sizeof an int: %ld bytes(s)\n", sizeof(i));
	printf("sizeof a long int: bytes(s)\n", sizeof(li));
	printf("sizeof a long long int : byte(s)\n", sizeof(lli));	
	printf("sizeof a float : bytes(s)\n", sizeof(f));
	return (0);
}
