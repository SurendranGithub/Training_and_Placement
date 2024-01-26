#include <stdio.h>

int main()
{
  int i,a[20],n,r,count=0;
  printf("Enter the array size :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\nEnter %d element :",i);
    scanf("%d",&a[i]);
  }
  printf("\nEnter the element to find Frequency : ");
  scanf("%d",&r);
  for (i =1 ; i<=n ; i++)
  {
    if(a[i]==r)
    {
    	count++;
    }
  }
printf("\nThe Frequency for %d number is :%d",r,count);
return 0;
}



/* Output:
------------------
Enter the array size :5

Enter 1 element :2

Enter 2 element :2

Enter 3 element :5

Enter 4 element :4

Enter 5 element :8

Enter the element to find Frequency : 2

The Frequency for 2 number is :2
*/
