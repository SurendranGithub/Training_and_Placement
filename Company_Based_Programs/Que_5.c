/* For hiring a car, a travel agency charges R1 rupees per hour for first N hours and then R2 rupees per hour.Given the total time of travel in minutes is X.
The task is to find the total travelling cost in rupees.
Note,While converting minutes into hours,ceiling value should be considered as the total number of hours.
For example : if the total travelling time is 90 minutes.(i.e), 1.5 hours,it must be considered as 2 hours.
I/P: 
20 - value of R1
4 - value of N in hours
40 - value of R2
300 - value of X in minutes
O/P:
120
Explaination:
Total Travelling hours = 300 / 60 = 5 hours
Rupees 20 / hours for first 4 hours = 20 * 4 = 80 rupees
Rupees 40 / hours for 5th hour = 40 * 1 = 40 rupees
Hence,the total cost = 80 + 40 = 120 rupees
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R1,N,R2,X,travel_time,i,cost=0;
	R1 = 20;
	R2 = 40;
	N = 4;
	X = 300;
	travel_time = (X / 60);
	for(i=1;i<=N;i++)
	{
		cost = cost + 20;
	}
	for(i=1;i<=travel_time-N;i++)
	{
		cost = cost + 40;
	}
	printf("\nTotal Cost is %d",cost);
	return 0;
}



/* Output:
----------------
Total Cost is 120
*/