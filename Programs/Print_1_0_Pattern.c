//Program to print 1 & 0 pattern

#include <stdio.h>

int main()
{
  int i, j, n;
  printf ("Enter the n value :");
  scanf ("%d", &n);
  for (i = n; i >= 1; i--)
  {
	for (j = 1; j <= i; j++)
	{
        if(i%2==0)
        {
        printf("0 ");
        }
        else
        {
          printf("1 ");  
        }
    }
    printf("\n");
  }
    return 0;
}



/* Output:
---------------
Enter the n value :5
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
*/