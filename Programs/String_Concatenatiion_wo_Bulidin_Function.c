//String Concatenation w/o buildin function:

#include<stdio.h>

int main()
{
    char str1[20], str2[20],len=0;
    printf("Enter the first String:");
    scanf("%s",str1);
    printf("Enter the second String:");
    scanf("%s",str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    for(int j=0;str2[j]!='\0';j++)
    {
        str1[len++]=str2[j];
    }
    str1[len++]='\0';
    printf("\nConcatenation:%s",str1);
    return 0;
}


/* Output:
--------------
Enter the first String:hello
Enter the second String:world!

Concatenation:helloworld!
*/