#include<node.h>
void remove_node(list *L , int index)
{
    list temp = *L;
    unsigned l = 0;
    if(*L != NULL)
    {
        list temp = *L;
        while(temp != NULL)
        {
            l+=1;
            temp = temp->next;
        }

    }
    if(index == 0)
    {
        if(*L!= NULL)
        {
            list temp = *L;
            *L=(*L)->next;
            free(temp);
        }
        return;
    }
    else
    {
        list temp1 = *L;
    unsigned j = 0;
    while(j < index-1)
    {
        temp1 = temp1->next;
        j++;
    }
    list temp2 = temp1;
    temp1 = temp1->next;
    temp2->next = temp1->next;
    free(temp1);
    return;
    }
}