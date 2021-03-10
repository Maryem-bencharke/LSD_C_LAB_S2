#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
    {
        int res;
        clock_t begin, end;

        
        begin = clock(); 
        res = recursive_fibo(i);
        end = clock(); 
        printf("recursive_fibo(%d) = %d \tTime elpased is %f\n",
            i,res, (double)(end - begin) / CLOCKS_PER_SEC);

        
        begin = clock(); 
        res = iterative_fibo(i);
        end = clock(); 
        printf("iterative_fibo(%d) = %d \tTime elpased is %f\n",
            i, res, (double)(end - begin) / CLOCKS_PER_SEC);
        printf("==========================================================\n");
    }
    return 0;
}
