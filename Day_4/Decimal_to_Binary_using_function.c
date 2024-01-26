#include <stdio.h>

void conversion(int);

int main()
{
    int d;
    printf("Enter the Decimal Number : ");
    scanf("%d",&d);
    conversion(d);
    return 0;
}

void conversion(int d)
{
	int j,i=0,arr[10000];
	while(d!=0)
    {
        arr[i]=d%2;
        
        d=d/2;
        ++i;
    }
    printf("\nThe Binary Number is:");
    for(j=i-1;j>=0;j--)
    {
        printf(" %d",arr[j]);
    }	
}



/* Output:
---------------------
Enter the Decimal Number : 8

The Binary Number is: 1 0 0 0
*/