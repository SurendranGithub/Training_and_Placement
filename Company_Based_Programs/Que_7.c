#include <stdio.h>

int main() 
{
    int i,len1=0,len2=0;
    char str[100];
    printf("Enter the String :  ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='*')
        {
            len1 = len1 + 1;
        }
        else if(str[i]=='#')
        {
            len2 = len2 + 1;
        }
    }
    printf("\nLength of the '*' is : %d",len1);
    printf("\nLength of the '#' is : %d",len2);
    if(len1==len2)
    {
        printf("\n0");
    }
    else if(len1>len2)
    {
        printf("\n1");
    }
    else
    {
        printf("\n-1");
    }
    return 0;
}



/* Output:
---------------
Enter the String :  ***###

Length of the '*' is : 3
Length of the '#' is : 3
0
*/