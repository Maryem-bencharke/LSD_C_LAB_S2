#include<node.h>

void print_list(list L)
{
    if(L== NULL)
        printf("[]");
    else{
        printf("[");
        list old = L;
        while(old->next != NULL)
        {
            printf("%d" , old->data);
            old = old->next;
    
        }
        if(old != NULL)
            printf("%d" , old->data);
        printf("]\n");
    }
}