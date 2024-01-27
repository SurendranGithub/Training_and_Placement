#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() 
{
    struct Student student1, student2;
    float averageMarks;
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);
    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);
    printf("\nDetails for student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);
    printf("\nDetails for student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);
    averageMarks = (student1.totalMarks + student2.totalMarks) / 2.0;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);
    return 0;
}



/* Output:
-------------------
Enter details for student 1:
Name: John
Age: 20
Total Marks: 85.5

Enter details for student 2:
Name: Alice
Age: 21
Total Marks: 78.5

Details for student 1:
Name: John
Age: 20
Total Marks: 85.50

Details for student 2:
Name: Alice
Age: 21
Total Marks: 78.50

Average Total Marks: 82.00
*/
