//Perfect number using function:

#include<stdio.h>

int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            sum=sum+i;
            printf("%d\t",sum);
        }
    }
    return sum;
}

int main()
{
    int n,a;
    printf("Enter the Number:");
    scanf("%d",&n);
    a = perfect(n);
    if(a == n)
    {
        printf("\n%d is a perfect number",n);
    }
    else
    {
        printf("\n%d is not a perfect number",n);
    }
    return 0;
}


/* Output:
----------------
Enter the Number:6
1       3       6
6 is a perfect number
*/