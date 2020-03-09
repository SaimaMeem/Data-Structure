#include <stdio.h>
#include <time.h>
void bubble_sorting(void);
int main (void)
{
  time_t start, end;
  start = time(NULL);
  bubble_sorting();
  end = time(NULL);
  printf("\nThe execution time is : %f secends" , difftime(end,start));
  return 0;
 }

 void bubble_sorting(void){
   int i,j,t,a1[1000];
   int temp=0, comparison_counts=0, swap_counts=0, sorted_array ;
   for(i=0; i<1000; i++){
    a1[i] = rand() % 100;
   }
   int k = 1000;
   while(k!=0){
    t=0;
    for(i=0; i<k-1; i++){
      if(a1[i] > a1[i+1]){
       comparison_counts++;
       temp = a1[i] ;
       a1[i] = a1[i+1] ;
       a1[i+1] = temp;
       t=i+1;
      }
     swap_counts++;
    }
    k = t;
   }

   printf("\nThe sorted array is:");
   for(i=0; i<1000; i++){
    printf("\n%d", a1[i]);
   }
    printf("\nThe count of comparison is: %d " , comparison_counts);
    printf("\nThe count of swap is: %d " , swap_counts);

 }
