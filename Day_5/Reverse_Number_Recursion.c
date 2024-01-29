#include<stdio.h>

int main()
{
    int n,ans;
    printf("Enter the number :");
    scanf("%d",&n);
    ans = reverse(n);
    printf("\nThe reverse of the given number is : %d",ans);
    return 0;
}

int reverse(int n)
{
    static int a,rev;
    if(n!=0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        reverse(n / 10);
    }
    else
    {
        return rev;
    }
}



/* Output:
------------------
Enter the number :12345

The reverse of the given number is : 54321
*/