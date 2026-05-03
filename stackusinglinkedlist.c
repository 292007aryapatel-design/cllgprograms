#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;

};


int main()
{
    struct stack *ptr,*temp,*top=NULL;
    int i,n,x,choice=0;

    printf("enter the size");
   scanf("%d",&n);
    while(choice!=5)
    {
         printf("1 push \n");
         printf("2 pop \n");
         printf("3 peep \n");
         printf("4 display \n");
         printf("5 exit \n");
         printf("please ennter your choice \n");
         scanf("%d",&choice);

         switch(choice)
         {
         case 1:
            ptr=(struct stack*)malloc(sizeof(struct stack));
            if(ptr==NULL)
            {
                printf("overflow");
            }
            else
            {
                printf("enter the value");
                scanf("%d",&ptr->data);
                ptr->next=top;
                top=ptr;
            }
           break;
         case 2:
            if(top==NULL)
            {
                printf("list is empty");
            }
            else
            {
               ptr=top;
               top=top->next;
               printf("%d is  deleted",ptr->data);
               free(ptr);

            }
            break;
         case 3:
            if(top==NULL)
            {
                printf("list is empty");
            }
            else
            {
                printf("%d is the top mmost element",top->data);
            }
            break;
         case 4:
            if(top==NULL)
            {
                printf("list is empty");
            }
            else
            {
                ptr=top;
                while(ptr!=NULL)
                {
                    printf("%d ",ptr->data);
                    ptr=ptr->next;
                }
            }
            break;
         }
    }
    return 0;
}
