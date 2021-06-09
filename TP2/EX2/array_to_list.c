#include<node.h>

list array_to_list(int size , int arr[])
{
    list L = create_node(arr[0]);
    for(int i=1 ; i<size ; i++)
    {
        add_node(arr[i] , L);
    }
    return L;
}