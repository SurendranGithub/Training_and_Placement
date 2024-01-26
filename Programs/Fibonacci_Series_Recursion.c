//Fibonacci series using recursion:

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The Fibonacci Series are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}



/* Output:
----------------
Enter the number : 10
The Fibonacci Series are : 0    1       1       2       3       5       8       13      21      34
*/