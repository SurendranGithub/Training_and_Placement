//Prime number using recursion:

#include<stdio.h>

int main()
{
    int n,a,q;
    printf("Enter the number : ");
    scanf("%d",&n);
    q = 2;
    a = check_prime(q,n);
    if(a==0)
    {
        printf("\nPrime Number");
    }
    else
    {
        printf("\nNot a prime number");
    }
    return 0;
}

int check_prime(int q , int n)
{
    if(n==q)
    {
        return 0;
    }
    else if(n%q == 0)
    {
        return 1;
    }
    else
    {
        return check_prime(q+1,n);
    }
}



/* Output:
-----------------
Enter the number : 5

Prime Number
*/