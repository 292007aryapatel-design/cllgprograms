#include<stdio.h>
#define MAX 100


int top=-1;
int s[MAX];
void push(int x)
{
    if(top==MAX-1)
    {
        printf("overr flow");
    }
    top++;
    s[top]=x;
}
int pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        return s[top];
    }
}


int main()
{
    int n;
    printf("enter the number of which you want to find facorial");
    scanf("%d",&n);

    push(1);

    for(int i=2;i<=n;i++)
    {
        push(pop()*i);
    }

    printf("%d",pop());
}
