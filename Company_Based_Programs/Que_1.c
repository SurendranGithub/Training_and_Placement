/*Inversion Count
j & k are the two indices of the array A 
Condition : j < k & a[j] > a[k]
*/

#include<stdio.h>

int main()
{
	int j,k,count=0;
	int a[5] = {1,20,6,4,5};
	for(j=0;j<=k;j++)
	{
		for(k=j+1;k<=5;k++)
		{
			if(a[j]>a[k])
			{
				count++;
			}
		}
	}
	printf("\nThe Inversion Count : %d",count);
	return 0;
}



/* Output:
----------------

*/