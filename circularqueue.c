#include<stdio.h>


int main()
{

int n,front=-1,rear=-1,x,val;
    printf("enter the size of queue");
    scanf("%d",&n);
int s[5];
int max=5;
int i,choice=1;
while(choice!=4)
{
 printf("1 insert");
printf("2 delete");
printf("3 display");
printf("4 exit");
printf("enter your choice");
scanf("%d",&choice);

switch(choice)
{
  case 1:
      if(front==0 && rear==max-1 ||(rear+1==front))
      {
          printf("over flow");
      }
      else
      {
          if( rear=max-1 && front!=0 )
          {
              printf("ennter value");
              scanf("%d",&x);
              rear=0;
          }
          else if(front==-1 && rear==-1)
          {
            printf("ennter value");
            scanf("%d",&x);
              front=0;
              rear=0;
          }
          else
          {
            printf("ennter value");
            scanf("%d",&x);
            rear++;
            s[rear]=x;
          }
      }
          break;
  case 2:
    if(front==-1)
    {
        printf("under flow");
    }
    else
    {
        val=s[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front=max-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
        printf("%d deleted",val);
    }
    break;
  case 3:
    if(front==-1)
    {
        printf("underflow");
    }
    else
    {
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d",s[i]);
            }
        }
        else
        {
            for(i=front;i<max;i++)
            {
                printf("%d",s[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d",s[i]);
            }

        }
    }
    break;
      }
}
return 0;
}


