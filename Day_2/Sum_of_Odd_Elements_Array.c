#include<stdio.h>

int main()
{
	int i,a[20],n,sum=0;
	printf("Enter the array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			sum = sum + a[i];
		}
	}
	printf("\nSum of odd elements : %d",sum);
	return 0;	
}



/* Output:
-----------------
Enter the array size :5

Enter 1 element :2

Enter 2 element :3

Enter 3 element :5

Enter 4 element :4

Enter 5 element :7

Sum of odd elements : 15
*/
	