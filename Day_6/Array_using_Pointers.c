#include<stdio.h>

int main()
{
	int a[10],*ptr,i,n;
	ptr = &a[0];
	printf("Enter the array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element :",i+1);
		scanf("%d",ptr+i);
	}
	printf("\nThe Array => ");
	for(i=0;i<n;i++)
	{
		printf("%03d ",*(ptr+i));
	}
	printf("\nThe Array Addresses => ");
	for(i=0;i<n;i++)
	{
		printf("%08X ",ptr+i);
	}
	printf("\nAddress -> Array_Value");
	for(i=0;i<n;i++)
	{
		printf("\n%08X -> %03d",(ptr+i),*(ptr+i));
	}
	return 0;
}



/* Output:
-----------------------
Enter the array size :5

Enter the 1 element :1

Enter the 2 element :2

Enter the 3 element :3

Enter the 4 element :4

Enter the 5 element :5

The Array => 001 002 003 004 005
The Array Addresses => 0065FDE0 0065FDE4 0065FDE8 0065FDEC 0065FDF0
Address -> Array_Value
0065FDE0 -> 001
0065FDE4 -> 002
0065FDE8 -> 003
0065FDEC -> 004
0065FDF0 -> 005
*/