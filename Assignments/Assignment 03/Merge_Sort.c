#include<stdio.h>

void mergeArray(int a[] , int p , int q , int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1] , R[n2+1];
    int i, j, k;
    for( i = 0 ; i < n1 ; i++)
    {
        L[i] = a[p+i];
    }
    for(j = 0 ; j < n2 ; j++)
    {
        R[j] = a[q+1+j];
    }
    L[n1] = 99999;
    R[n2] = 99999;
    for(i = 0 , j = 0 , k = p ; k <= r ; k++)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i++];
        }
        else
        {
            a[k] = R[j++];
        }
    }
}

void mergeSort(int a[] , int p , int r)
{
    if(p<r)
    {
        int q = (int) ((p+r)/2);
        mergeSort(a , p , q);
        mergeSort(a , q+1 , r);
        mergeArray(a, p , q , r);
    }
}

int main()
{
  int n , i, j, a[100];
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
  mergeSort(a , 0 , n-1);

  printf("\nThe sorted array is: ");
  for(j=0 ; j<n; j++)
   {
    printf("%d  " , a[j]);
   }
  return 0;
}
