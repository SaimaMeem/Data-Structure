#include <stdio.h>
int main ()
{
  int i,n, j,t, k, temp = 0,  a[20];
   printf("Enter the number of elements: ");
   scanf("%d" , &n);
  printf("Enter the elements: ");
  for(i=0 ; i<n; i++)
   {
    scanf("%d" , &a[i]);
   }
  printf("The array is: ");
   for(i=0 ; i<n; i++)
   {
    printf("%d  " , a[i]);
   }
   for (j = n-1 ; j>=1 ; j--)
   {
       t = 0;
       for(k= 1; k<=j ; k++)
       {
           if( a[t] < a[k] )
           {
                t = k;
           }
       }
       temp = a[j];
       a[j] = a[t];
       a[t] = temp ;
   }
    printf("\nThe sorted array is: ");
   for(j=0 ; j<n; j++)
   {
    printf("%d  " , a[j]);
   }

 return 0;

}
