//Handshaking problem:

#include<stdio.h>

int main()
{
    int n,ans;
    printf("Enter the number:");
    scanf("%d",&n);
    ans = (n * (n - 1)) / 2;
    printf("\nThe maximum number of handshaking possibility are : %d",ans);
    return 0;
}



/* Output:
----------------
Enter the number:4

The maximum number of handshaking possibility are : 6
*/