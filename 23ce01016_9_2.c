#include<stdio.h>
#include<string.h>

void input_details();
void print_details();

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
        input_details(s[i]);        
    }

    printf("Student Information:\n");
    for (int i = 0; i < 6; i++)
    {
       print_details(s[i]); 
    }

    return 0;
}

void input_details(struct student s){
    printf("Enter RollNo: ");
    scanf("%d",&s.RollNo);
    fflush(stdin);                                      
    printf("Enter student name: ");
    gets(s.Name);
    fflush(stdin);
    printf("Enter student address: ");
    gets(s.Address);
    printf("Enter student age: ");
    scanf("%d",&s.Age);
    printf("Enter students's average-marks: ");
    scanf("%f",&s.average_marks);
}

void print_details(struct student s){
        printf("\n");
        printf("Roll No %d:\n", s.RollNo);
        printf("Name: %s\n", s.Name);
        printf("Address: %s\n", s.Address);
        printf("Age: %d\n", s.Age);
        printf("Average-marks: %.2f\n", s.average_marks);
}