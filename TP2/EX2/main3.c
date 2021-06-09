#include<node.h>
int main()
{
    int data1 , data2;
    printf("suggest a number for the first element of the list : \n");
    scanf("%d",&data1);
    list L = create_node(data1);
    printf("suggest the second number : \n" );
    scanf("%d", &data2);
    add_node(data2 , L);
    print_list(L);
    int arr[5] = {1,2,3,4,5};
    list R = array_to_list(5 , arr);
    print_list(R);
    remove_node(&R , 4);
    print_list(R);
    return 0;
}