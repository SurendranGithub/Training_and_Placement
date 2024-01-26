//Right Triangle of Numbers

#include <stdio.h>

int main()
{
  int i, j, n, count = 1;
  printf ("Enter the number :");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
  {
	for (j = 1; j <= i; j++)
	{
    	printf("%d ",count++);
    }
    printf("\n");
  }
    return 0;
}



/* Output:
-----------------
Enter the number :5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/