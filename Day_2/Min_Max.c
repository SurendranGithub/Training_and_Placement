#include<stdio.h>

int main()
{
    int n,a[10],i,max,min;
    printf("Enter the Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d Element:",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	{
    		max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Maximum Element in the array is %d",max);
	printf("\nMinimum Element in the array is %d",min);
    return 0;
}



/* Output:
------------------
Enter the Array Elements:5
Enter 0 Element:2
Enter 1 Element:5
Enter 2 Element:10
Enter 3 Element:7
Enter 4 Element:12
Maximum Element in the array is 12
Minimum Element in the array is 2
*/