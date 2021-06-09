#include<floodfill.h>
void print(point p , char **arr)
{
    for(int i=0 ; i<p.a ; i++)
    {
        printf("\n");
        for(int j=0 ; j<p.b ; j++)
        {
            printf("%c" , arr[i][j]);
        }
    }
    printf("\n");
}