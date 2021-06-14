/*ex1*/
#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int value;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
}tree;

tree *new_tree( int x)
{
    tree *tr = malloc(sizeof(*tr));
    if(tr == NULL)
    {
        printf("ERROR\n");
        exit(EXIT_FAILURE);
    }
    tr -> value = x;
    tr -> left = NULL;
    tr -> right = NULL;
    tr -> parent = NULL;
    printf("creation de %d\n", tr-> value);
    return tr;
}

void clean_tree(tree *tr)
{
    if(tr == NULL)
        return;
    printf("suppression de valeur d'arbre %d\n", tr -> value);
    clean_tree(tr -> left);
    clean_tree(tr -> right);
    return tr;
}

int check(tree *tr)
{
    if (tr == NULL)
        return 0;
    return 1;
}
int max(int x , int y)
{
    if (x>=y)
        return x;
    return y;   
}
int tree_depth(tree *tr)
{
    if(check(tr)==0)
        return -1;
    if(tr->left == NULL) 
        return 1+tree_depth(tr->right);
    if(tr->right == NULL)
        return 1+ tree_depth(tr->left);
    return max (tree_depth(tr->left), tree_depth(tr->right));
}

int tree_diameter(tree *tr)
{
        return 1 + tree_depth(tr->left)  + tree_depth(tr->right);
}
int sum(int x , int y)
{
    return x + y;
}

int leaf_sum(tree *tr)
{
    if(check(tr)==0)
        return -1;
    if(tr->left == NULL && tr->right == NULL)
        return 1;
    return sum( leaf_sum(tr->left) , leaf_sum(tr->right));
    
}

/*ex2*/
int insert_recursive(tree *T , int x)
{
    if(check(T)==0)
    {
       T=new_tree(x);
        return; 
    }
    if(x==(T)->value)
        return;
    if(x<(T)->value)
    {
        insert_recursive(x , &T -> left);
    }
    if(x>T->value)
    {
        insert_recursive(x , &T->right);
    }
}

tree *search(int x , tree *T)
{
    if(check(T)==0)
        return NULL;
    if(x == T->value)
        return T;
    if(x > T->value)
        return search(x, T->right);
    if(x < T->value)
        return search(x,T->left);
}

int max_depth(tree *tr)
{
    if(check(tr)==0)
        return -1;
    if(tr->left == NULL) 
        return 1+max_depth(tr->right);
    if(tr->right == NULL)
        return 1+ max_depth(tr->left);
    return max (max_depth(tr->left), max_depth(tr->right));
}

int tree_size(tree *tr)
{
    if(check(tr)==0)
        return -1;
    return sum(tree_size(tr->left) ,tree_size( tr->right)) +1; 
    
}

