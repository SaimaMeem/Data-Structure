#include<conio.h>
#include<stdio.h>


struct doubly
{
    struct doubly *front;
    struct doubly *back;
    int i;
};

void main()
{
    struct doubly *head=0;
    struct doubly *last=0;
    struct doubly *p=0;
    struct doubly *temp=0;
    int ch,intch,user,t,add;

    head=(struct doubly *)malloc(sizeof(struct doubly));
    head->back=0;
    head->front=0;
    printf("\n\tEnter data: ");
    scanf("%d",&head->i);
    last=head;
    printf("\n\n\n***DOUBLY LINKED LIST OPERATIONS:****\n");
    printf("\n              MENU                   \n");
    printf("\n 1.Display  \n");
    printf("\n 2.Insert \n");
    printf("\n 3.Delete \n");
    printf("\n 4.Exit \n");
    scanf("%d",&ch);

    while(ch!=4)
    {
       if(ch==1)
        {
          p=head;
          while(p!=0)
            {
              printf("\t %d",p->i);
              p=p->back;
            }
        }
        if(ch==2)
        {
          printf("\n\t 1. Insertion at front.");
          printf("\n\t 2. Insertion at end.");
          scanf("%d",&intch);
          temp=(struct doubly *)malloc(sizeof(struct doubly));
          printf("\n\tEnter data:");
          scanf("%d",&temp->i);
          if(intch==1)
            {
             temp->front=0;
             temp->back=head;
             head=temp;
            }
          if(intch==2)
          {
             p=head;
             while(p->back!=0)
              {
               p=p->back;
              }
             temp->back=0;
             temp->front=p;
             p->back=temp;
            }
          }

      if(ch==3)
        {
         printf("\n\t1.Delete from the front.");
         printf("\n\t2.Delete from the end.");
         scanf("%d",&intch);
         if(intch==1)
          {
            head->back=t;
            free(head);
            head=t;
            head->front=0;
          }
         if(intch==3)
          {
            p=head;
            while(p->back!=0)
             {
              p=p->back;
             }
            temp->front=p;
            p->back=temp;
            temp->back=0;
          }

        }
    printf("\n 1.Display  \n");
    printf("\n 2.Insert \n");
    printf("\n 3.Delete \n");
    printf("\n 4.Exit \n");
    scanf("%d",&ch);
    }
return 0;
}
