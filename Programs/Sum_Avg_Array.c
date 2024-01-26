//Find the sum and average of array elements

#include <stdio.h>

int main()
{
  int i, a[20], n,sum=0,avg;
  printf ("Enter the array size:");
  scanf ("%d", &n);
  for (i =1 ; i<=n ; i++)
  {
    printf("\nEnter the %d value : ",i);
    scanf("%d",&a[i]);
  }
  for (i =1 ; i<=n ; i++)
  {
    sum=sum+a[i];
  }
  printf("\nSum : %d",sum);
  avg=sum/n;
  printf("\nAverage : %d",avg);
  return 0;
}



/* Output:
-------------------
Enter the array size :5

Enter the 1 value : 1

Enter the 2 value : 2

Enter the 3 value : 3

Enter the 4 value : 4

Enter the 5 value : 5

Sum : 15
Average : 3
*/
