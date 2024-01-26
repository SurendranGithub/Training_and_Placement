//Postive Factors

#include <stdio.h>

int main()
{
  int i, n;
  printf ("Enter the number :");
  scanf ("%d", &n);
  for (i =1 ; i<=n ; i++)
 {
	if(n%i==0)
 	{
 		printf("%d\t",i);	
	}
 }
  return 0;
}



/* Output:
---------------
Enter the number :6
1       2       3       6
*/