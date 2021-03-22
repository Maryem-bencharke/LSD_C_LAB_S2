#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime(int n)
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


void    get_primes(int n)
{
   int i;
	for(i=2;i<=n;i++){
		if (isprime(i)==1)
			printf("%d is prime\n",i);
	}
	return 0;
}

