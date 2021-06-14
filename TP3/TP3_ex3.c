#include<stdio.h>
#include<stdlib.h>
#include "stack.h"


t_stack	*new_stack(int data)
{
    t_stack *C=(t_stack *)malloc(sizeof(t_stack));
    C->data=data;
    C->next=NULL;
    return C;

}


int is_empty(t_stack *head)
{
    if(head==NULL)
        return 1;
    return 0;
}
int read (t_stack *head)
{
    if(is_empty(head)==0)
        return head->data;
    return INT_MIN;
    }

void  push(t_stack **p, int x)
{
    t_stack *C=(t_stack *)malloc(sizeof(t_stack));
    C->data=x;
    C->next=*p;
    *p=C;
}

// Dépilement

int	  pop(t_stack **head)
{
    if(is_empty(*head)==0)
    {
        int res=(*head)->data;
        t_stack *temp=*head;
        *head=(*head)->next;
        free(temp);
        return res;
    }
    return INT_MIN;
}
int  stack_len(t_stack *head)
{
    unsigned l=0;
    t_stack *temp=head;
    while(temp!=NULL)
    {
        l+=1;
        temp=temp->next;
    }
    return l;
}

void affichage_pile(t_stack *head)
{
    t_stack *temp=head;
    while(temp!=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    if(temp!=NULL)
        printf("%d\n",temp->data);
}

void freey(t_stack *head)
{
    while(head!=NULL)
    {
        t_stack *temp=head;
        head=head->next;
        free(temp);
    }
}
int	  peek_stack(t_stack *head)
{
    if(is_empty(head)==1)
        return INT_MIN;
    return head->data;
}
void	print_stack(t_stack *head)
{
    if(is_empty(head)==1)
    {
        printf("[]\n");
        return;
    }
    printf("[");
    t_stack *temp = head;
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        return;
    }
    printf("%d]\n",temp->data);

}
int main()
{
    t_stack *p = new_stack(6);
	printf("%d\n", is_empty(p));
	print_stack(p);
	push(&p, 5);
	print_stack(p);
	printf("%d\n", stack_len(p));
	printf("%d\n", pop(&p));
	print_stack(p);
	t_stack *T = NULL;
	printf("%d\n", pop(&T));
	printf("%d\n", peek_stack(p));
	print_stack(p);

	return 0;
}
