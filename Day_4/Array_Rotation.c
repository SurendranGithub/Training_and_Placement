#include<stdio.h>

void rotation(int arr[],int n,int rot)
{
	int i,index;
	rot=rot%n;
	for(i=0;i<n;i++)
	{
		index=(i-rot+n)%n;
		printf("%d",arr[index]);
	}
}


void main()
{
	int i,n,rot;
	int arr[40];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the array elements :\n");
	for(i=0;i<n;i++)
	{
	   	printf("\n Enter the %d value : ",i+1);
		scanf("%d",&arr[i]);		
	}
	printf("\nEnter the number of rotation :");
	scanf("%d",&rot);
	printf("\nArray After rotation\n");
	rotation(arr,n,rot);
}



/* Output:
------------------
Enter the size of the array:5

Enter the array elements :

 Enter the 1 value : 1

 Enter the 2 value : 2

 Enter the 3 value : 3

 Enter the 4 value : 4

 Enter the 5 value : 5

Enter the number of rotation :2

Array After rotation
45123
*/