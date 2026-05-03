#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    int menu=0,key,choice=1;
    struct node *head,*temp,*prev,*after,*newnode;

      while(menu!=13)
      {
          printf("\n-------------------MENU ------------------------\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert Before Node\n");
        printf("5. Insert After Node\n");
        printf("6. Delete from Beginning\n");
        printf("7. Delete from End\n");
        printf("8. Delete Before Node\n");
        printf("9. Delete After Node\n");
        printf("10. Delete Particular Node\n");
        printf("11. Display\n");
        printf("12. Count No of Node\n");
        printf("13. Exit");
        printf("\n----------------------------------------------------\n");
        printf("Enter Menu Choice :- ");
        scanf("%d",&menu);

        switch(menu)
        {
         case 1:
            head=NULL;
            printf("linknlist is creating /n");
            while(choice==1)
            {
               newnode=(struct node*)malloc(sizeof(struct node));
               printf("enter node");
               scanf("%d",&newnode->data);
               newnode->next=NULL;
                if(head==NULL)
                {
                    head=temp=newnode;
                }
                else
                {
                    temp->next=newnode;
                    temp=newnode;
                }
                printf("press one to create newnode");
                scanf("%d",&choice);


            }
                 break;

         case 2:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                newnode=(struct node*)malloc(sizeof(struct node));
               printf("enter node");
               scanf("%d",&newnode->data);
               newnode->next=head;
               head=newnode;
            }
             break;

          case 3:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                newnode=(struct node*)malloc(sizeof(struct node));
               printf("enter node");
               scanf("%d",&newnode->data);
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=NULL;
            }
            break;
          case 4:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
             else
             {
                 printf("enter key");
                 scanf("%d",&key);
                  temp=head;
                 while(temp!=NULL && temp->data!=key)
                 {
                     prev=temp;
                     temp=temp->next;
                 }
                 if(temp==NULL)
                 {
                     printf("key not found");
                 }
                 else if(temp==head)
                 {
                     newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter node");
                     scanf("%d",&newnode->data);
                     newnode->next=head;
                     head=newnode;
                 }
                 else
                 {
                      newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter node");
                     scanf("%d",&newnode->data);
                     newnode->next=temp;
                     prev->next=newnode;

                 }
             }
             break;

          case 5:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
             {
                 printf("enter key");
                 scanf("%d",&key);
                  temp=head;
                 while(temp!=NULL && temp->data!=key)
                 {
                     //prev=temp;
                     temp=temp->next;

                 }
                   if(temp==NULL)
                 {
                     printf("key not found");
                 }
                 else if(temp->next==NULL)
                 {
                      newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter node");
                     scanf("%d",&newnode->data);
                     temp->next=newnode;
                     newnode->next=NULL;
                 }
                 else
                 {
                      newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter node");
                     scanf("%d",&newnode->data);
                     after=temp->next;
                     newnode->next=after;
                     temp->next=newnode;

                 }
             }
                 break;
            case 6:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                temp=head;
                head=temp->next;
                free(temp);
            }
              break;
         case 7:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev->next=NULL;
                free(temp);
            }
            break;

         case 8:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                printf("enter key ");
                scanf("%d",&key);
                temp=head;
                while(temp!=NULL && temp->data!=key)
                {
                    prev=temp;
                    temp=temp->next;
                }
                if(temp==head)
                {
                    printf("delition not possible");
                }
                else if(temp==NULL)
                {
                    printf("key not found");
                }
                else if(prev=head)
                {
                   temp=head;
                   head=temp->next;
                   free(temp);
                }
                else
                {
                    prev->next=temp->next;
                    free(temp);
                }
            }
               break;
            case 9:
            if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {
                 printf("enter key ");
                scanf("%d",&key);
                temp=head;
                 while(temp!=NULL && temp->data!=key)
                {

                    temp=temp->next;
                }
                if(temp==NULL)
                {
                    printf("key not ffound");
                }
                else if(temp->next==NULL)
                {
                    printf("not possible because it is a last node");
                }
                else
                {
                    after=temp->next;
                    temp->next=after->next;
                    free(after);
                }
            }
            break;
               case 10:
               if(head==NULL)
            {
                printf("the  list is not there");
            }
            else
            {

            }


          case 11:
               if(head==NULL)
            {
                printf("the  list is not there");
            }
               else
            {
                temp=head;
                while(temp!=NULL)
                {
                    printf("%d ",temp->data);
                    temp=temp->next;
                }
            }

            break;
        }
      }
      return 0;
}
