#include<floodfill.h>

void scan_point(point *p)
{
    scanf("%d%d", &p->a , &p->b);
}

void scan_array(point p , char **arr)
{
    for(int i=0 ; i<p.a ; i++)
    {
        for(int j=0 ; j<p.b ; j++)
        {
            scanf("%c" , &arr[i][j]);
        }
    }
}