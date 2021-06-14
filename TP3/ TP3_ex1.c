#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<header.h>


struct cellule
{
    char element;
    struct cellule *next;
};
typedef struct cellule cellule;
typedef struct cellule* liste;


int main(int ac, char **av)
{
   printf("%s\n",av[1]);
   int len = strlen(av[1]);
   cellule *L;
   L = get_llist(av[1]);
   /*plindrome(L, len);*/
   plindrome2(L, len);
}


cellule* get_llist(char *v)
{
    cellule *C=(cellule *)malloc(sizeof(cellule));
    cellule *temp=C;
    int i;
    C->next=NULL;
    while(v[i]!='\0')
    {
        C->element=v[i];
        C->next=(cellule *)malloc(sizeof(cellule));
        C=C->next;
        C->next=NULL;
        i++;
    }

    return temp;
}  
void plindrome(cellule *C, int len)
{
    cellule *D=C;
    cellule *temp=C;
    int i=0;
    int n=0;
    while (C!=NULL && i < len/2)
    {
        D=temp;
        n=0;
        while(D!=NULL)
        {
            if ((len - i - 1)==n )
            {
                printf("%c\n", D->element);
                printf("%c\n", C->element);
                if (D->element != C->element)
                    printf("False\n");
                printf("True\n");
            }
            D=D->next;
            n++;

        }
        C=C->next;
        i++;
    }
}
void plindrome2(cellule *C,int len)
{
        liste L=NULL;
        cellule *temp=C;
        int i=0;
        while( C !=NULL && i < len/2)
        {
            temp=temp->next;
            i++;
        }
        while(temp !=NULL && i>= len/2)
        {
            ajoutFin(temp->element,&L);
        }
        if (L->element!=C->element)
            printf("FALSE\n");
        printf("TRUE\n");
        
}
