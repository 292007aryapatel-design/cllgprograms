#include<stdio.h>
#include<string.h>
#define MAX 100

char item;
char s[MAX];
int top=-1;

int pushchar(char item)
{
    if(top==MAX-1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        s[top]=item;
    }

return 0;
}
int popchar()
{

    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        item=s[top];
        top=top-1;
        return item;
    }
}


int main()
{

    char str[MAX];
    printf("please enter the element of stack");
    gets(str);
    int i;

    for(i=0;i<strlen(str);i++)
        pushchar(str[i]);

    for(i=0;i<strlen(str);i++)
    str[i]=popchar();


    printf("reverse string is %s",str);

    return 0;
}

