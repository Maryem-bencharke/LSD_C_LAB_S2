#include<node.h>

list create_node(int data)
{
    list new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next = NULL;
    return new;
}