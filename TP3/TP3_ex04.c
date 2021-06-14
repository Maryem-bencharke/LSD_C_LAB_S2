#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"
#include"math.h"
#include<ctype.h>

/*double addition(double op1, double op2)
{
    return op1 + op2;
}

double multiplication(double op1 , double op2)
{
    return op1 * op2;
}

double soustraction(double op1 , double op2)
{
    return op1 - op2;
}

double division(double op1 , double op2)
{
    return op1 / op2 ;
}

double powf(double op1 , double op2)
{
    return pow(op1 , op2);
}*/

int reverse_polish(char *string)
{
    int n;
    int x;
    int y;
    unsigned s=strlen(string);
    for(int i=0;i<s;i++)
    {
        if(isdigit(string[i])==0)
        {
            n=atoi(string[i]);
            t_stack *p=new_stack(n);
            int x;
            int y;
            x=pop(&p);
            y=pop(&p);
            if(string[i]=='+')
                push(&p,x+y);
                return;
            if(string[i]=='-')
                push(&p,x-y);
                return;
            if(string[i]=='*')
                push(&p,x*y);
                return;
            if(string[i]=='/')
                push(&p,x/y);
                return;
            if(string[i]=='pow')
                push(&p,pow(x,y)); 
                return;

        }
        if(isdigit(string[i])==1)
        {
            int x , y;
            t_stack *p=new_stack(string[i]);
            x=pop(&p);
            y=pop(&p);
            if(string[i]=='+')
                push(&p,x+y);
                return;
            if(string[i]=='-')
                push(&p,x-y);
                return;
            if(string[i]=='*')
                push(&p,x*y);
                return;
            if(string[i]=='/')
                push(&p,x/y);
                return;
            if(string[i]=='pow')
                push(&p,pow(x,y)); 
                return;
        }
        
    }
    
    
}
