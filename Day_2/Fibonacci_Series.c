#include<stdio.h>

int main()
{
	int n,i,t1,t2,next_term;
	t1=0;
	t2=1;
	next_term=t1+t2;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("\nFibonacci Series => %d,%d,",t1,t2);
	for(i=3;i<=n;i++)
	{
		printf("%d,",next_term);
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	return 0;
}



/* Output:
-----------------
Enter the number :10

Fibonacci Series => 0,1,1,2,3,5,8,13,21,34,
*/