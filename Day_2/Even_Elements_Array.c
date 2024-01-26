#include<stdio.h>

int main()
{
	int i,a[20],n;
	printf("Enter the array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe even elements in the array => ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}



/* Output:
-------------------
Enter the array size :5

Enter 1 element :12

Enter 2 element :6

Enter 3 element :7

Enter 4 element :5

Enter 5 element :4

The even elements in the array => 12     6       4
*/	