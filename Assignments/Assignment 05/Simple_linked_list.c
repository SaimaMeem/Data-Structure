#include<stdio.h>
#include<stdlib.h>

void display();
void insert();
void delete_end();

struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
int main()
{
  struct node *temp,*ptr;
  temp=(struct node *)malloc(sizeof(struct node));
  if(temp==NULL)
    {
     printf("\nOut of Memory Space:\n");
     exit(0);
    }

   printf("\nEnter the data value for the node:  ");
   scanf("%d",&temp->info);
   temp->next=NULL;
   if(start==NULL)
    {
     start=temp;
    }
   else
       {
         ptr=start;
         while(ptr->next!=NULL)
          {
            ptr=ptr->next;
          }
          ptr->next=temp;
       }

  int choice;
  while(1){
           printf("\n\n\n***SINGLE LINKED LIST OPERATIONS:****\n");
           printf("\n              MENU                   \n");
           printf("\n 1.Display  \n");
           printf("\n 2.Insert at the end \n");
           printf("\n 3.Delete from the end \n");
           printf("\n 4.Exit \n");
           printf("\nEnter your choice:\t");
           scanf("%d",&choice);
           switch(choice)
             {
               case 1:
                      display();
                      break;
               case 2:
                      insert();
                       break;
               case 3:
                      delete_end();
                       break;
               case 4:
                      exit(0);
                      break;
               default:
                      printf("\n Wrong Choice:\n");
                      break;
             }
        }
  return 0;
}

void display()
{
  struct node *ptr;
  if(start==NULL)
    {
      printf("\nList is empty.\n");
      return;
    }
  else
    {
      ptr=start;
      printf("\nThe List elements are: ");
      while(ptr!=NULL)
       {
         printf("%d\t",ptr->info );
         ptr=ptr->next ;
       }
        }
}

void insert()
{
  struct node *temp,*ptr;
  temp=(struct node *)malloc(sizeof(struct node));
  if(temp==NULL)
    {
     printf("\nOut of Memory Space.\n");
     return;
    }
  printf("\nEnter the data value for the node:\t" );
  scanf("%d",&temp->info );
  temp->next =NULL;
  if(start==NULL)
   {
    start=temp;
   }
   else
     {
       ptr=start;
       while(ptr->next !=NULL)
           {
             ptr=ptr->next ;
           }
       ptr->next =temp;
     }
}

void delete_end()
{
  struct node *temp,*ptr;
  if(start==NULL)
  {
    printf("\nList is Empty.");
    exit(0);
  }
  else if(start->next ==NULL)
    {
      ptr=start;
      start=NULL;
      printf("\nThe deleted element is:%d\t",ptr->info);
      free(ptr);
    }
  else
    {
       ptr=start;
       while(ptr->next!=NULL)
        {
          temp=ptr;
          ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\nThe deleted element is:%d\t",ptr->info);
        free(ptr);
    }
}
