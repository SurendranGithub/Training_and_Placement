//Left Triangle Pattern

#include <stdio.h>

int main()
{
	int i, j, n,k;
  	printf ("Enter the n value :");
  	scanf ("%d", &n);
  	for (i = n; 0 <= i; i--)
  	{		
    	for (j = 0; j <= i-1; j++)
    	{
        	printf(" ");
    	}
    	for(k=j+1;k<=n;k++)
    	{
        	printf("*");
    	}
      printf("\n");
	}
    return 0;
}



/* Output:
------------------
Enter the n value :5

    *
   **
  ***
 ****
*****
*/