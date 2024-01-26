#include<stdio.h>

int main()
{
	int i,j;
	int height;
	printf("Enter the height :");
	scanf("%d",&height);
	for(i=0;i<height;i++)
	{
		for(j=0;j<height;j++)
		{
			if(i==0||i==height-1)
			{
				printf("*");
			}
			else if(i==height/2)
			{
				printf("*");
			}
			else if(i<height/2 && j==0)
			{
				printf("*");
			}
			else if(i>height/2 && j==height-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}



/* Output:
----------------
Enter the height :5
*****
*
*****
    *
*****
*/