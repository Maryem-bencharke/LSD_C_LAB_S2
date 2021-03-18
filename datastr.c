#include<stdio.h>
#include<stdlib.h>
struct t_list { 
	int data; 
	struct t_list* link; 
}; *head

int create_node(int n)
{
	/*struct t_list *head=malloc(sizeof(sizeof(struct t_list));
	head->data=n;
	head->link=NULL;*/
{
    struct t_list *newNode, *temp;
    int data, i;

    head = (struct t_list *)malloc(sizeof(struct t_list));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->link = NULL; 
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct t_list *)malloc(sizeof(struct t_list));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->link = NULL; 

                temp->link = newNode; 
                temp = temp->link; 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

int remove_node(int key)
{
    struct t_list *prev, *cur;
    while (head != NULL && head->data == key)
    {
        prev = head;
        head = head->link;
        free(prev);
        return;
    }

    prev = NULL;
    cur  = head;
    while (cur != NULL)
    {
        if (cur->data == key)
        {
            if (prev != NULL) 
                prev->next = cur->link;
            free(cur);
            return;
        } 

        prev = cur;
        cur = cur->link;
    }
}

void displayList()
{
    struct t_list *temp;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        
        temp = temp->link;  
    }

    printf("\n");
}

int main()
{
    int n, key;
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    create_node(n);

    printf("\nData in list before deletion\n");
    remove_node();

    printf("\nEnter element to delete with key: ");
    scanf("%d", &key);

   remove_node(key);

    printf("\nData in list after deletion\n");
    displayList();

    return 0;
	
