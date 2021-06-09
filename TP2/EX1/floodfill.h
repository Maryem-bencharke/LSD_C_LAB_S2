#ifndef FLOODFILL_H
#define FLOODFILL_H
#include<stdio.h>
#include<stdlib.h>


typedef struct t_point
{
    int a;
    int b;
} point;

void print(point p , char **arr);
void scan_point(point *p);
void scan_array(point p, char **arr);
char **get_arr(point p);
void flood_fill(char **arr , point x , point y , char F , char S);
#endif
