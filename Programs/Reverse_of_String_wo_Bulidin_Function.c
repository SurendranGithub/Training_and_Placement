//Reverse of an String w/o buildin function:

#include<stdio.h>

int main()
{
    char str1[20],rev[20],len=0,end;
    printf("Enter the first String:");
    scanf("%s",str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    end = len -1;
    for(int i=0;i<len;i++)
    {
        rev[i]=str1[end];
        end--;
    }
    printf("Reverse of the String is :%s",rev);
    return 0;
}



/* Output:
----------------
Enter the first String:hello
Reverse of the String is :olleh
*/