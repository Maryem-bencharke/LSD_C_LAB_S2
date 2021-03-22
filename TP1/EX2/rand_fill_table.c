#include "header.h"

/*
** Hint: You need to use rand function for generating random numbers
** and to get out of getting the same series of random numbers every time
** you run the program you need to use srand.
** https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
void rand_fill_table(int *tab, int size)
{
   int T[1000];
	/*int max1,max2,max3;*/
	int i;
	srand(time(NULL));
	for(i=0;i<1000;i++){
		T[i]= 1+ rand()%1000;
		}
	for(i=0;i<1000;i++){
		printf("T[%d]:%d\n",i,T[i]);
	}
		printf("T[%d]:%d\n",i,T[i]);
	return 0;
}
