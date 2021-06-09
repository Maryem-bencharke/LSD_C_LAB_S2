#include<stdio.h>
#include<stdlib.h>
#include<floodfill.h>

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