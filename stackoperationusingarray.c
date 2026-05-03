#include<stdio.h>
#define MAX 100


int top=-1;
int s[MAX],n;

void push()
{
    int x;
    if(top==n-1)
    {
        printf("over flow");
    }
    else
    {
            printf("enter value");
    scanf("%d",&x);

    top++;
    s[top]=x;
    }


}
void pop()
{
    int val;

    if(top==-1)
    {
        printf("under flow");
    }
    else
    {
    val=s[top];
    top--;
    printf("%d is deleted",val);
    }

}
void peep()
{
     if(top==-1)
    {
        printf("under flow");
    }
    else
    {
        printf("%d is the top most elemnt",s[top]);
    }
}

void display()
{
if(top==-1)
    {
        printf("under flow");
    }
    else
    {
        int i;


        for(i=top;i>=0;i--)
        {
            printf("%d ",s[i]);
        }
    }


}


int main()
{
    printf("please enter size of stack");
    scanf("%d",&n);

    if(n>MAX)
    {
        printf("stack overflow");
    }
    int i,choice;
    do
    {
        printf("1. push");
        printf("2. pop");
        printf("3. peep");
        printf("4. display");
        printf("5 exit");
        printf("enter your chocie");
        scanf("%d",&choice);

        switch(choice)
        {
      case 1:
          push();
          break;
      case 2:
        pop();
        break;
      case 3:
        peep();
        break;
      case 4:
        display();
        break;
      case 5:
        printf("stack completed");
        break;
      default:
        printf("invalid choice");
        break;

        }
    }while(choice!=5);

    return 0;
}



