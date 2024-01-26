//String Length w/o bulidin function:

#include<stdio.h>

int main()
{
    int count=0;
    char str[20];
    printf("Enter the String:");
    scanf("%s",str);
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("\nThe Length of the String is %d",count);
    return 0;
}



/* Output:
----------------
Enter the String:hello
hello
The Length of the String is 5
*/