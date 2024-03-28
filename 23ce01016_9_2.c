#include<stdio.h>
#include<string.h>

struct student
{
    
    int RollNo;
    char Name[100];
    char Address[500];
    int Age;
    float average_marks;
};

int main(){
    struct student s[6];
    for (int i=0; i<6; i++){
        printf("Enter RollNo: ");
        scanf("%d",&s[i].RollNo);
        fflush(stdin);                                      
        printf("Enter student name: ");
        gets(s[i].Name);
        fflush(stdin);
        printf("Enter student address: ");
        gets(s[i].Address);
        printf("Enter student age: ");
        scanf("%d",&s[i].Age);
        printf("Enter students's average-marks: ");
        scanf("%f",&s[i].average_marks);
    }

    printf("Student Information:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("\n");
        printf("Roll No %d:\n", s[i].RollNo);
        printf("Name: %s\n", s[i].Name);
        printf("Address: %s\n", s[i].Address);
        printf("Age: %d\n", s[i].Age);
        printf("Average-marks: %.2f\n", s[i].average_marks);
    }

    return 0;
}
