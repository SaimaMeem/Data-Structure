#include <stdio.h>
#include <time.h>
void insertion_sorting(void);
int main(void)
{
 insertion_sorting();
 return 0;
}
 void insertion_sorting(void)
 {
     int i,j,t,a1[1000];
   int n=1000, temp=0, comparison_counts=0;
   for(i=0; i<n; i++){
    a1[i] = rand() % 100;
   }
   time_t start, end;
     start = time(NULL);
     a1[0] = -1;
     for(j=2; j<n; j++){
        temp = a1[j];
        i = j-1;
        while(temp < a1[i])
            {
              comparison_counts++;
                a1[i+1] = a1[i] ;
                i--;
            }
        a1[i+1] = temp ;

     }
        end = time(NULL);

      printf("\nThe sorted array is:");
   for(i=0; i<1000; i++){
    printf("\n%d", a1[i]);
   }
     printf("\nThe execution time is : %f secends" , difftime(end,start));
    printf("\nThe count of comparison is: %d " , comparison_counts);
 }


