#include<stdio.h>

int main()
{
	int i,a[20],j,n;
	printf("Enter the array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Duplicates Elements are...\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\t",a[i]);
			}
		}
	}
	return 0;
}



/* Output:
---------------
Enter the array size :5

Enter 1 element :5

Enter 2 element :5

Enter 3 element :4

Enter 4 element :4

Enter 5 element :7

Duplicates Elements are...
5       4
*/