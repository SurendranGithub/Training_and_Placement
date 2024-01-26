//Automorphic number using function:

#include<stdio.h>

int automorphic(int n)
{
    int square,len=0,temp,a,b1,b2,count;
    square = n*n;
    temp = n;
    b1 = n;
    while(temp!=0)
    {
        len++;
        temp = temp / 10;
    }
    printf("%d",square);
    while(b1!=0)
    {
        a = square % 10;
        b2 = b1 % 10;
        if(a == b2)
        {
            count++;
        }
        square = square / 10;
        b1 = b1 / 10;
    }
    if(count == len)
    {
        printf("\nAutomorphic");
    }
    else
    {
        printf("\nNot a automorphic");
    }
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    automorphic(n);
    return 0;
}



/* Output:
----------------
Enter the number:25
625
Automorphic
*/