/* Number of integers in the range interval[n1,n2][both inclusive] which have no repeated digits.
for ex:
suppose n1 = 11 , n2 = 15
There is the number 11,which has repeated digits, but 12,13,14and15 have no repeated digits.so,the output is : 4.
I/P:
n1 = 11
n2 = 15 
O/P:
4
------
I/P:
n1 = 101
n2 = 200
O/P:
72.
*/



#include <stdio.h>

int isUnique(int num) 
{
    int Count[10] = {0};
    while (num > 0) 
	{
        int d= num % 10;
        Count[d]++;
        if (Count[d] > 1)
		{
            return 0; 
        }
        num /= 10;
    }
    return 1; 
}

int allUnique(int first,int last)
{
    int count=0;
    for(int i=first;i<=last;i++)
    {
        if(isUnique(i))
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    int num1,num2;
    printf("Enter start length : ");
    scanf("%d", &num1);
    printf("Enter last length : ");
    scanf("%d", &num2);
    printf("The total unique number are :%d",allUnique(num1,num2));
    return 0;
}



/* Output:
----------------------
Enter start length : 101
Enter last length : 200
The total unique number are :72
*/