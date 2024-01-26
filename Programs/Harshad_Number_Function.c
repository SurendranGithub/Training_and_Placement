//Harshad number using function:

#include<stdio.h>

void harshad(int n)
{
    int a,temp,sum=0;
    temp = n;
    while(temp!=0)
    {
        a = temp % 10;
        sum = sum + a;
        temp = temp / 10;
    }
    printf("\n%d",sum);
    if(n % sum == 0)
    {
        printf("\n%d is a harshad number",n);
    }
    else
    {
        printf("\n%d is not a harshad number",n);
    }
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    harshad(n);
    return 0;
}



/* Output:
-----------------------
Enter the number:21

3
21 is a harshad number
*/