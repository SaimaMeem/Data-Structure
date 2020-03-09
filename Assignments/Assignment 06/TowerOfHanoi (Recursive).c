#include <stdio.h>
void towerOfHanoi(int n, char fromrod, char torod, char helpingrod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    towerOfHanoi(n-1, fromrod, helpingrod, torod);
    printf("\n Move disk %d from rod %c to rod %c", n, fromrod, torod);
    towerOfHanoi(n-1, helpingrod, torod, fromrod);
}

int main(void)
{
    int n;
    printf("\nEnter the no. of Disks: ");
	scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
