//Print the Multiple of 10 elements in the array - right side

#include<stdio.h>

int main()
{
	int i;
	int a[10] = {10,12,5,40,30,7,50,9,10};
	for(i=0;i<=10;i++)
	{
		if(a[i]%10!=0)
		{
			printf("%d\t",a[i]);
		}
	}
	for(i=0;i<=10;i++)
	{
		if(a[i]%10==0)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}



/* Output:
-----------------
12      5       7       9       16      10      40      30      50      10      0
*/