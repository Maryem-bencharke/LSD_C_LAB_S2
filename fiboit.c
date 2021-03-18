#include<stdio.h>
int fiboit(int n)
{
	int i;
	int f0=0,f1=1,f=0;
	if(n==0 || n==1)
		return n;
	for(i=2;i<=n;i++){
		f=f0 + f1;
		f0=f1;
		f1=f;
	}
	return f;
}

int main()
{
	 int n;
	 printf("entrez un entier:");
	 scanf("%d",&n);
	 printf("%d\n",fiboit(n));
	 return 0;
}

