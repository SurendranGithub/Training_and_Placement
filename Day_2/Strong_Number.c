#include<stdio.h>

int main()
{
    int i,n,temp,a,sum=0,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        a = temp%10;
        for(i=1;i<=a;i++)
        {
            fact = fact * i;
        }
        printf("%d\n",fact);
        sum = sum + fact;
        fact = 1;
        temp = temp/10;
    }
    if(sum == n)
    {
        printf("%d is Strong Number",n);
    }
    else
    {
        printf("%d is not a Strong Number",n);
    }
    return 0;
}



/* Output:
----------------
Enter the number:145
120
24
1
145 is Strong Number
*/
