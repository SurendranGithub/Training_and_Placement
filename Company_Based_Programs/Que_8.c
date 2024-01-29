#include<stdio.h>

int main()
{
	int a =10;
	printf("%d %d %d %d %d",++a,a++,++a,a++,++a);
	return 0;
}



/* Output:
------------------
15 13 15 11 15
*/