#include<stdio.h>

int main()
{
    int i , j , k, n, m, a[30][30], b[30][30], res[30][30];
    printf("Enter the rows of an 1st matrix:");
    scanf("%d",&n);
    printf("Enter the columns of an 1st matrix:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the [%d,%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nFirst Matrix");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the rows of an 2nd matrix:");
    scanf("%d",&n);
    printf("Enter the columns of an 2nd matrix:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the [%d,%d] element:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSecond Matrix");
     for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Multiplication");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            res[i][j]=0;
            for(k=0;k<m;k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}



/* Output:
-----------------------------
Enter the rows of an 1st matrix:3
Enter the columns of an 1st matrix:3

Enter the [0,0] element:1

Enter the [0,1] element:1

Enter the [0,2] element:1

Enter the [1,0] element:2

Enter the [1,1] element:2

Enter the [1,2] element:2

Enter the [2,0] element:3

Enter the [2,1] element:3

Enter the [2,2] element:3

First Matrix
1       1       1

2       2       2

3       3       3

Enter the rows of an 2nd matrix:3
Enter the columns of an 2nd matrix:3

Enter the [0,0] element:1

Enter the [0,1] element:1

Enter the [0,2] element:1

Enter the [1,0] element:2

Enter the [1,1] element:2

Enter the [1,2] element:2

Enter the [2,0] element:3

Enter the [2,1] element:3

Enter the [2,2] element:3

Second Matrix
1       1       1

2       2       2

3       3       3

Matrix Multiplication
6       6       6

12      12      12

18      18      18
*/