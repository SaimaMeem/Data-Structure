#include<stdio.h>
int a[100];

void quick_sort(int f , int l)
{
    int i , j;
    int temp = 0, temp1 = 0;
    if(f < l)
    {
        i = f+1;
        j = l;
        while (a[i] < a[f])
        {
            i++;
        }
        while(a[j] > a[f])
        {
            j--;
        }
        while(i < j)
        {
            temp = a[i] ;
            a[i] = a[j] ;
            a[j] = temp ;
            while (a[i] < a[f])
            {
                i++;
            }
            while(a[j] > a[f])
            {
                j--;
            }
        }
        temp = a[j] ;
        a[j] = a[f] ;
        a[f] = temp ;
       quick_sort(f , j-1);
       quick_sort(j+1 , l);
    }
}
int main()
{
   int n, i, j;
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
   quick_sort(0 , n-1);

   printf("\nThe sorted array is: ");
   for(j=0 ; j<n; j++)
   {
    printf("%d  " , a[j]);
   }

   return 0;

}
