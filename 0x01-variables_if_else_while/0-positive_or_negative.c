#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/* more headers goes there */


/* This program will assign a random number to the variable n each time it is executed. */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if( n > 0){
						printf(" is positive\n");
					}
					else if(n == 0){
						printf(" is zero\n");
					}
					else if(n < 0){
						printf(" is negative\n");
					}

					return (0);

}
