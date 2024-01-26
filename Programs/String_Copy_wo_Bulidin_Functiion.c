//String Copy w/o buildin function:

#include<stdio.h>

int main()
{
    int i,len=0;
    char str[20], copy_str[20];
    printf("Enter the String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        copy_str[i] = str[i];
    }
    printf("The copied string is %s",copy_str);
    return 0;
}



/* Output:
----------------
Enter the String:hello
The copied string is hello
*/