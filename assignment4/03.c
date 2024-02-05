#include<stdio.h>
#define limit 3

struct Employee {
    int code;
    char name[50];
    char designation[50];
    float salary;
    char department[50];
    char city[50];
};

int main() {
    struct Employee employees[limit];

    for(int i = 0; i < limit;i++) {
        printf("\nEnter the details for employee (%d):-\n", i+1);
        
        printf("Code: ");
        scanf("%d", &employees[i].code);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Designation: ");
        scanf("%s", employees[i].designation);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("City Of Positing: ");
        scanf("%s", employees[i].city);
    }

    printf("\nEmployees with salary above 20,0000:-");
    for(int i = 0; i < limit;i++)
        if(employees[i].salary > 200000)
            printf("\n%d. %s", i+1, employees[i].name);

    return 0;
}