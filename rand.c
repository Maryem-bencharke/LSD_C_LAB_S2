#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int maximum()
{
	int T[1000];
	int max1,max2,max3;
	int i;
	srand(time(NULL));
	for(i=0;i<1000;i++){
		T[i]= 1+ rand()%1000;
	
	/*for(i=0;i<1000;i++){
		printf("T[%d]:%d\n",i,T[i]);
	}*/
		printf("T[%d]:%d\n",i,T[i]);
	}
	for (i=0;i<997;i++)
{
	if(T[i]>T[i+1])
	{
		if(T[i+1]>T[i+2])
		{
			max1=T[i];
			max2=T[i+1];
			max3=T[i+2];
		}
		else{
			if(T[i+2]>T[i])
			{
				max1=T[i+2];
				max2=T[i];
				max3=T[i+1];
			}
		}
	}
	else{
		if(T[i]>T[i+2])
		{
			max1=T[i+1];
			max2=T[i];
			max3=T[i+2];	
		}
		else
			if (T[i+2]>T[i+1])
			{
				max1=T[i+2];
				max2=T[i+1];
				max3=T[i];
			}
			else
			{
				max1=T[i+1];
				max2=T[i+2];
				max3=T[i];
			}
	}
	return max3;
}


int main()
{
	maximum();
}


