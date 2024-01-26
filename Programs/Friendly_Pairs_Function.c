//Friendly pair using function:

#include<stdio.h>

int main()
{
    int num1,num2,a1,a2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    a1=friendly_pair(num1);
    a2=friendly_pair(num2);
    if(a1 == a2)
    {
        printf("\nGiven numbers are friendly pair.");
    }
    else
    {
        printf("\nGiven numbers are not a friendly pair.");
    }
    return 0;
}

int friendly_pair(int num1)
{
    int i, sum=0;
    for(i=1;i<num1;i++)
    {
        if(num1 % i == 0)
        {
            sum = sum +i;
        }
    }
    return sum / num1;
}



/* Output:
-------------------
Enter the 1st number : 6
Enter the 2nd number : 12

Given numbers are friendly pair.
*/