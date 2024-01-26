#include <stdio.h>

int main()
{
  int i, a[20], n,j,temp;
  printf("Enter the array size :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter %d element : ",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
       if(a[i]>a[j])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       } 
    }
  }
  printf("\nThe Sorted Array => ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
      
  }
  return 0;
}



/* Output:
------------------
Enter the array size :5

Enter 1 element : 12

Enter 2 element : 0

Enter 3 element : 15

Enter 4 element : 2

Enter 5 element : 8

The Sorted Array => 0   2       8       12      15
*/