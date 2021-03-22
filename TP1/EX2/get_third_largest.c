#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
	int max1,max2,max3;
	int i;
	max1=-1;
	max2=-1;
	max3=-1;
	for(i=0;i<size;i++)
		if(T[i]>max1)
			max1=T[i];
	for(i=0;i<size;i++)
		if(T[i]>max2 && T[i]<max1)
			max2=T[i];
	for(i=0;i<size;i++)
		if(T[i]>max3 && T[i]<max2)
			max3=T[i];
   printf("le 3eme max = %d\n",max3);
	return 0;
}
