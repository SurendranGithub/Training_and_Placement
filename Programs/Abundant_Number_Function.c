//Abundant Number using function:

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    abundant(n);
    return 0;
}

int abundant(int n)
{
    int i, sum=0, ans;
    for(i=1;i<n;i++)
    {
        if(n % i == 0)
        {
            sum = sum +i;
        }
    }
    if(sum > n)
    {
        ans = sum - n;
        printf("\nAbundant Number : %d",ans);
    }
    else
    {
        printf("\nNot a Abundant Number");
    }
}



/* Output:
-----------------
Enter the number : 12

Abundant Number : 4
*/