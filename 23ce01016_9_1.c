#include<stdio.h>
#include<string.h>

struct company
{
    char name[100];
    char address[500];
    int phone;
    int noOfEmployee;
};

int main(){
    int num;
    printf("Enter no of companies: ");
    scanf("%d",&num);
    struct company c[num];
    for (int i=0; i<num; i++){
        fflush(stdin);                                      
        printf("Enter company's name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);
        c[i].name[strcspn(c[i].name, "\n")] = 0;
        fflush(stdin);
        printf("Enter company's address: ");
        fgets(c[i].address, sizeof(c[i].address), stdin);
        c[i].address[strcspn(c[i].address, "\n")] = 0;
        printf("Enter company's phone: ");
        scanf("%d",&c[i].phone);
        printf("Enter company's no of employee: ");
        scanf("%d",&c[i].noOfEmployee);
    }

    printf("Company Information:\n");
    for (int i = 0; i < num; i++)
    {
        printf("Company %d:\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Address: %s\n", c[i].address);
        printf("Phone: %d\n", c[i].phone);
        printf("No of Employee: %d\n", c[i].noOfEmployee);
    }





    return 0;
}
