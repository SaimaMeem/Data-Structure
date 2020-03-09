#include <stdio.h>
int main (void)
{
  int a1[1000],i,j,t,temp=0 ;
   for(i=0; i<1000; i++){
    a1[i] = rand() % 1000;
   }

   int k = 1000;
   while(k!=0){
    t=0;
    for(i=0; i<k-1; i++){
      if(a1[i] > a1[i+1]){
       temp = a1[i] ;
       a1[i] = a1[i+1] ;
       a1[i+1] = temp;
       t=i+1;
      }
    }
    k = t;
   }

   printf("\nThe sorted array is:");
   for(i=0; i<1000; i++){
    printf("\n%d", a1[i]);
   }

  int high = 999, low = 0, mid, key;
  printf("\nEnter the element to search :");
  scanf("%d", &key) ;
  do{
      mid = (low + high)/ 2 ;
      if(a1[mid] == key)
        {
        printf("\nFound at %d" , mid+1);

        break;
        }
       else if(a1[mid] > key)
        {
         high = mid - 1 ;
        }
        else
        {
         low = mid + 1 ;
        }

    }
  while(low <= high) ;

  if( low > high )
  {
    printf("\nNot found!");
  }
 return 0 ;

}
