#include<stdio.h>
#include <stdlib.h>
int top=-1;
 int stack[20], n=10;
int menu();
void push();
void pop();
void display();
int main()
  {
    int i,stack[20];
  printf("Enter the elements: ");
  for(i=0 ; i<n; i++)
   {
    scanf("%d" , &stack[i]);
   }
  printf("The array is: ");
   for(i=0 ; i<n; i++)
   {
    printf("%d  " , stack[i]);
   }
int choice;
while(1)
 {
  printf("\nEnter your choice:\n");
  printf("\n1.Push\n2.Pop\n3.display\n4.Exit\n");
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
       display();
       break;
     case 4:
       exit(0);
     default:
      printf("Invalid choice!\nEnter a valid choice to continue!\n");

   }
 }
return 0;
  }

void push()
  {
   int num;
   if(top==n-1)
   printf("Stack Overflow!");
   else
   {
    printf("Enter the number that is to be pushed:");
    scanf("%d",&num);
    top++;
    stack[top]=num;
   }
  }

void pop()
 {
  if(top==-1)
  printf("Empty Stack!");
  else
    {
      printf("The number %d have been deleted",stack[top]);
      top--;
    }
}

void display()
  {
   int i;
   for(i=0; i<=top; i++)
   printf("%d\t",stack[i]);
  }
