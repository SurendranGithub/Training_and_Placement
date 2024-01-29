#include<stdio.h>

struct student
{
	char name[30];
	int roll_no;
	float percentage;
};

int main()
{
	struct student stud1 , *ptr;
	ptr = &stud1;
	printf("Enter the Student Details:");
	printf("\n---------------------------");
	printf("\nName:");
	scanf("%s",ptr->name);
	printf("\nRoll Number:");
	scanf("%d",&ptr->roll_no);
	printf("\nPercentage:");
	scanf("%f",&ptr->percentage);
	
	printf("\nStudent Details:");
	printf("\n---------------------------");
	printf("\nName :%s",ptr->name);
	printf("\nRoll Number :%d",ptr->roll_no);
	printf("\nPercentage :%f",ptr->percentage);
	
	return 0;
}



/* Output:
------------------
Enter the Student Details:
---------------------------
Name:John

Roll Number:24

Percentage:95.5

Student Details:
---------------------------
Name :John
Roll Number :24
Percentage :95.500000
*/