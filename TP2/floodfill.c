#include<stdio.h>
#include<stdlib.h>
#include<floodfill.h>


/*typedef struct t_point t_point;
struct t_point
{
	int x;
	int y;
};

int main (){
t_point point;
point.x = 3;
point.y = 4;
int *p = all(point);
printf("x = %d , y = %d",*p,*(p+1));
}
t_point *allocatestruct()
{
    t_point *p=(t_point * )malloc(sizeof(t_point));
    scanf("%d%d",&p->x,&p->y);
    return p;
}
char** allocation(t_point dim)
{
    char **p;
    p=(int**)malloc(sizeof(char*)dim.x);
    for(int i=0;i<=dim.x;i++)
        p[i]=(int*)malloc(sizeof(char)*dim.y);
    for(int i=0;i<=dim.x;i++)
        for(int j=0;j<=dim.y;j++)
            scanf("%c",&(p[i][j]));
    return p;
}
t_point get_position(t_point pst)
{
	printf("entrez une position");
	scanf("%d\n",&x,&y);
	pst.x=a;
	pst.y=b;
	return pst;
}

void flood_fill(char **Tab, t_point pst, t_point dim)
{
    char F;
	char c = Tab[pst.x][pst.y];
	Tab[pst.x][pst.y]=F;
	t_point p;
	
	if( pst.b>0 && Tab[pst.a][pst.b-1]==c)
		p.a = pst.a;
		p.b = pst.b;
		flood_fill(
		

}	*/
	
/*int main(allr);
{
	int x,y;
	printf("entrez deux entier");
	scanf("%d",&x,&y);
	return x,y;
}*/

char **get_array(point p)
{
	char **arr = malloc(p.a * sizeof(char*));
	for(int i=0 ; i<p.a ; i++)
		arr[i] = malloc(p.b * sizeof(char));
	return arr;
}
void flood_fill(char **arr , point x , point y , char F , char S)
{
	if(x.a >= 0 && x.a < y.a && x.b < y.b && x.b>=0 && arr[x.a][x.b] != F)
	{
		if (arr[x.a][y.b]==S)
		{
			arr[x.a][y.b] = F;
			flood_fill(arr, (point){x.a + 1, x.b}, y, F , S);
			flood_fill(arr, (point){x.a - 1, x.b}, y , F, S);
			flood_fill(arr, (point){x.a, x.b + 1}, y, F, S);
			flood_fill(arr, (point){x.a, x.b - 1},  y , F, S);
		}
	}
}