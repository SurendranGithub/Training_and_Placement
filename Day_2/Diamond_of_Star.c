#include <stdio.h>

int main()
{
  int i,j,n,k;
  printf("Enter the no.of rows :");
  scanf("%d",&n);
  for(i=n;0<=i;i--)
  {
	for(j=0;j<=i-1;j++)
    {
        printf(" ");
    }
    for(k=j+1;k<=n;k++)
    {
        printf("* ");
    }
    printf("\n");
  }
  for(i=0;n>=i; i++)
  {
	for(j=0;j<=i-1;j++)
    {
        printf(" ");
    }
    for(k=j+1;k<=n;k++)
    {
        printf("* ");
    }
    printf("\n");
  }
return 0;
}



/* Output:
-------------------
Enter the no.of rows :5

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

//											OR

#include <stdio.h>

int main()
{
    int i,j,n;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d%c",&n,&ch);
    printf("Enter the symbol: ");
    ch=getchar();
    for(i=1;i<=n;i++)
    {
	    for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i*2-1;j++)
                
        {
            printf("%c",ch);
        }
        printf("\n");
	    
    }                          
	for(i=n-1;i>0;i--)
    {
	    for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}



/* Output:
------------------------------
Enter number of rows: 5
Enter the symbol: *
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
