#include <stdio.h>
int main (void)
 {
  int i,j,k,n,flag, a1[1000], b1[1000];
  printf("\n Enter the element to search: ");
  scanf("%d", &n);
   flag = -1;
   for(i=0; i<1000 ;i++){
    a1[i]= rand() % 100;
    }

    for(i=0, j=0; i<1000; i++){
    if(a1[i]==n){
     b1[j]=i;
     flag = 1;
     j++;
      }
    }
    if(flag == -1)
    printf("\nNot Found!");
    else
    {
    printf("\nThe given element is found at following position(s):");
     for(k=0; k<j; k++){
     printf("\n%d", b1[k]);
      }
     }
  return 0;
  }

