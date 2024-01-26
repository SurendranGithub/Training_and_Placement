//Print Z Pattern

#include <stdio.h>

int main()
{
  int i, j, n;
  printf ("Enter the number :");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
  {
	for (j = 1; j <= n; j++)
	{
    	if(i==1 || i+j==n+1 || i==n)
    	{
    		printf("*");
		}
		else
		{
			printf(" ");
		}
    }
    printf("\n");
  }
    return 0;
}



/* Output:
------------------
Enter the number :5
*****
   *
  *
 *
*****
*/