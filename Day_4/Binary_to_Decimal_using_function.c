#include<stdio.h>
#include<math.h> 

int conversion(int);

int main()
{
    int bin,ans;       
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    ans=conversion(bin);
    printf("Decimal: %d", ans);    
    return 0;
}

int conversion(int bin)
{
	int remainder,i=0,decimal=0;
	while(bin != 0)
    {
        remainder = bin % 10;
        decimal += remainder * (int)pow(2, i++);
        bin = bin / 10;        
    }
return decimal;
}



/* Output:
-----------------
Enter a binary number: 1000
Decimal: 8
*/