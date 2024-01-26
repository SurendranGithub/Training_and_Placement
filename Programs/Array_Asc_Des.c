#include<stdio.h>

int main()
{
	int i,j,n,temp,a[30],k;
	temp = 0;
	printf("Enter the array elemnets : ");
	scanf("%d",&n);
	k = n / 2;
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=k;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nThe Array => ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}



/* Output:
-------------------------
Enter the array elemnets : 5

Enter 1 element : 56

Enter 2 element : 2

Enter 3 element : 1

Enter 4 element : 100

Enter 5 element : 89

The Array => 2  56      100     89      1
*/