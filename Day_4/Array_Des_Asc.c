#include <stdio.h>

int main()
{
  int i, a[20], n,j,temp1,temp2;
  printf("Enter the array size :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter %d element : ",i+1);
    scanf("%d",&a[i]);
  }
  for (i =0;i<n/2; i++)
  {
    for(j=i+1;j<n/2;j++)
    {
       if(a[i]<a[j])
       {
           temp1=a[i];
           a[i]=a[j];
           a[j]=temp1;
       }  
    }
  }
  for (i=(n/2)+1; i<n; i++)
  {
     for(j=i+1;j<n;j++)
    {
       if(a[i]>a[j])
       {
           temp2=a[i];
           a[i]=a[j];
           a[j]=temp2;
       }
    }
  }
  printf("\nThe Array => ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);   
  }
  return 0;
}



/* Output:
------------------------
Enter the array size :6

Enter 1 element : 89

Enter 2 element : 100

Enter 3 element : 45

Enter 4 element : 6

Enter 5 element : 12

Enter 6 element : 2

The Array => 100 89 45 6 2 12
*/
