#include <stdio.h>
#include <stdlib.h>

int queue[20], n = 10;
int rear = - 1;
int front = - 1;
int main()

{
int choice;
int i, queue[20];
  printf("Enter the elements: ");
  for(i=0 ; i<n; i++)
   {
    scanf("%d" , &queue[i]);
   }
  printf("The array is: ");
   for(i=0 ; i<n; i++)
   {
    printf("%d  " , queue[i]);
   }
  while (1)
   {
       printf("\n1.Insert element to queue \n");
       printf("2.Delete element from queue \n");
       printf("3.Display all elements of queue \n");
       printf("4.Quit \n");
       printf("Enter your choice : ");
       scanf("%d", &choice);

        switch (choice)
       {
           case 1:
          insert();
            break;
              case 2:
               delete();
                 break;
                 case 3:
               display();
                 break;
                 case 4:
               exit(1);

            default:

            printf("Wrong choice \n");
       }
   }
   return 0;
}
insert()

{

    int add_item;

    if (rear == n - 1)

    printf("Queue Overflow \n");

    else

    {

        if (front == - 1)


        front = 0;

        printf("Insert the element in queue : ");

        scanf("%d", &add_item);

        rear = rear + 1;

        queue[rear] = add_item;

    }

}

delete()

{

    if (front == - 1 || front > rear)

    {

        printf("Queue Underflow \n");

    }

    else

    {

        printf("Element deleted from queue is : %d\n", queue[front]);

        front = front + 1;

    }

}
display()

{

    int i;

    if (front == - 1)

        printf("Queue is empty \n");

    else

    {

        printf("Queue is : \n");

        for (i = front; i <= rear; i++)

            printf("%d ", queue[i]);

        printf("\n");

    }

}
