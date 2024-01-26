/* An automobile company manufactures both a 2Wheeler and 4Wheeler.A company manager
wants to make the production of both types of vehicle according to the given data below:
1st data : Total no.of vehicle(4 & 2 Wheelrs)  = V
2nd data : Total no.of Wheels = W
The task is to find how 2WH as well as 4WH needd to manufacture as per the given data.
I/P
200 -> V
540 -> W
O/P
2 Wheelers - 130
4 Wheelers - 70
Explaination
130 + 70 = 200 vehicle
(70 * 4) + (130 * 2) = 540 Wheels
constraints
W<2 & W%2!=0 & V>=W ==> Imvalid data 
*/

#include<stdio.h>

int main()
{
    int v, w, x, y;
    printf("Enter the v value :");
    scanf("%d",&v);
    printf("\nEnter the w value :");
    scanf("%d",&w);
    if(w%2!=0||w<2||v>=w)
    {
        printf("\nInvalid Inputs!!!");
    }
    else
    {
        x = (w / 2) - v;
        y = v - x;
        printf("Two Wheelers : %d",y);
        printf("\nFour Wheelers : %d",x);
    }
    return 0;
}



/* Output:
----------------
Enter the v value :200

Enter the w value :540
Two Wheelers : 130
Four Wheelers : 70
*/