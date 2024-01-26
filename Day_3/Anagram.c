#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],temp;
    int len1=0,len2=0;
    int i,j;
    printf("Enter the First String:");
    scanf("%s",str1);
    printf("Enter the Second String:");
    scanf("%s",str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    printf("%d",len1);
    for(int j=0;str2[j]!='\0';j++)
    {
        len2++;
    }
    printf("\n%d",len2);
    if(len1 == len2)
    {
        for(i=0;i<len1;i++)
        {
            for(j=i+1;j<len1;j++)
            {
                if(str1[i]>str1[j])
                {
                    temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }
            }
        }
        for(i=0;i<len2;i++)
        {
            for(j=i+1;j<len2;j++)
            {
                if(str2[i]>str2[j])
                {
                    temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }
    }
    printf(strcmp(str1,str2)==0?"\nAnagram" : "\nNot a Anagram");
    return 0;
}



/* Output:
--------------------
Enter the First String:listen
Enter the Second String:slient
6
6
Anagram
*/