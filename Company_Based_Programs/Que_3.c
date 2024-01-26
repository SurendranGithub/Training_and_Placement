//Lower Triangular Matrix - TCS

#include<stdio.h>

int main()
{
    int r1,c1,i,j,a[50][50],flag=0;
    printf("Enter the rows of an 1st matrix:");
    scanf("%d",&r1);
    printf("Enter the columns of an 1st matrix:");
    scanf("%d",&c1);
    printf("\nEnter the Lower Triangular Matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\nEnter [%d,%d] element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Matrix");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=i+1;j<c1;j++)
        {
            if(a[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nThe Matrix is Lower Triangular Matrix");
    }
    else
    {
        printf("\nThe Matrix is not a Lower Triangular Matrix");
    }
    return 0;
}



/* Output:
----------------------
Enter the rows of an 1st matrix:4
Enter the columns of an 1st matrix:4

Enter the Lower Triangular Matrix
Enter [1,1] element:1

Enter [1,2] element:0

Enter [1,3] element:0

Enter [1,4] element:0

Enter [2,1] element:5

Enter [2,2] element:7

Enter [2,3] element:0

Enter [2,4] element:0

Enter [3,1] element:2

Enter [3,2] element:5

Enter [3,3] element:3

Enter [3,4] element:0

Enter [4,1] element:8

Enter [4,2] element:5

Enter [4,3] element:4

Enter [4,4] element:1

The Matrix
1       0       0       0
5       7       0       0
2       5       3       0
8       5       4       1
The Matrix is Lower Triangular Matrix
*/