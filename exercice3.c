#include<stdio.h>
#include<stdlib.h>
int isprime(int n)
{
	if (n==1)
		return 0;
	if  (n==0 || n==2)
		return 0;
	else
	{ 
		int i;
		for(i=2;i<n;i++){
			if (n%i==0)
				return 0;
			else
				return 1;
		}
	}
	return 0;
}

int get_primes(int n)
{
	int i;
	for(i=2;i<=n;i++){
		if (isprime(i)==1)
			printf("%d is prime\n",i);
	}
	return 0;
}

int isprime_opt(int n)
{
	if(n==2)
		return 1;
	if(n<2 || n%2==0)
		return 0;
	}
	for (int i=3 ; i < n-1 ; i=i+2)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	/*int r;
	int m;
	int s;
	printf("entrez un entier");
	scanf("%d",&n);	
	r=isprime(n);
	printf("%d",r);
	printf("entrez un entier:");
	scanf("%d",&m);
	s=get_primes(m);
	printf("%d",s);*/
	scanf("number : %d\n",&n);
	printf("n==%d\n",n);
	printf("isprime %d\n",isprime(n));
	get_primes(n);
	printf("isprime_opt %d\n",isprime_opt(n));
	return 0;
}

