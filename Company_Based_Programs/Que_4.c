//Fact of the number without multiplication - TCS

#include<stdio.h>

int fact(int n)
{
    int i,j;
    int sum;
    int ans = n;
    for(i=n-1;i>0;i--)
    {
        sum=0;
        for(j=0;j<i;j++)
        {
            sum +=ans;
        }
        ans = sum;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of the number is: %d",fact(5));
    return 0;
}



/* Output:
-------------------
Enter the number:5
The factorial of the number is: 120
*/