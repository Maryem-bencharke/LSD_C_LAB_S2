#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "header.h"

liste link(unsigned n)
{
    liste L=NULL;
    srand(time(NULL));
    for(int i=0; i<n;i++)
    {
        int x= rand()%50;
        /*printf("%d\n",rand()%50);*/
        ajoutFin(x,&L);
        /*liste C=(liste)malloc(sizeof(cellule));
        C->element=rand()%50;
        C->suivant=NULL;
        L=C;*/
    }
    return L;
}
liste sort_list(liste L)
{
    liste temp1 = L;
    liste temp2 = L;
    int k=0;
    while(temp1 != NULL)
    {
        temp2=temp1->suivant;
        while(temp2 != NULL)
        {
            printf("comparing %d %d\n",temp1->element, temp2->element);
            if((temp2->element) > (temp1->element))
            {
                k=temp2->element ;
                temp2->element=temp1->element;
                temp1->element=k;
            }
            temp2 = temp2->suivant;
        }
        temp1=temp1->suivant;
    }

    return L;
}

liste merge_list(liste L1,liste L2)
{
    liste temp=L2;
    if (L1==NULL)
         return L2;
    if(L2==NULL)
        return L1;
    for(int i=0;i<=longueur(L2);i++)
    {
        ajoutFin(temp->element,&L1);
        temp=temp->suivant;
    }
    return L1;
    sort_list(&L1);
    return L1;

}

void remove(liste *L,int m)
{
    liste temp = *L;
    unsigned n=0;
    if(*L!=NULL)
    {
        liste temp = *L;
        while(temp!=NULL)
        {
            n+=1;
            temp=temp->suivant;
        }
    }
    if (m==0)
    {
        if(*L!=NULL)
        {
            liste temp=*L;
            *L=(*L)->suivant;
            free(temp);
        }
        return;
    }
    else
    {
        liste temp1 = *L;
    unsigned j=0;
    while(j<m-1)
    {
        temp1 = temp1->suivant;
        j++;

    }
    liste temp2 = temp1;
    temp1 = temp1->suivant;
    temp2->suivant = temp1->suivant;
    free(temp1);
    return;
    }
}
void print_result(liste L)
{
    if(L==NULL)
        printf("[]");
    while(L!=NULL)
    {
        printf("[%d",L->element);
        liste M = L->suivant;
        while(M->suivant!=NULL)
        {
            printf("%d",M->element);
            M=M->suivant;
        }
        if(M!=NULL)
            printf("%d",M->element);
        printf("%d]");
    }
}

int main()
{
    liste L=NULL;
    liste L1=NULL;
    liste L2 = NULL;
    /*link(100);*/
    L = link(5);
    sort_list(L);
    L1 = link(7);
    L2 = link(4);
    merge_list(&L1,&L2);


    return 0;
}