#include <stdio.h>

int main(){
    struct employee{
        char name[50];
        int hireDate;
        float salary;
    };

    struct employee person1 = {"John", 20010826, 800.75}, person2;

    printf("Employee %s was hired in %d and has a salary of %.2f.\n", person1.name, person1.hireDate, person1.salary);

    printf("\nInsert the name of the second employee:");
    scanf("%s", person2.name);
    printf("\nInsert the hire date (format: YYYYMMDD) of the second employee:");
    scanf("%d", &person2.hireDate);
    printf("\nInsert the salary of the second employee:");
    scanf("%f", &person2.salary);

    printf("Employee %s was hired in %d and has a salary of %.2f.\n", person2.name, person2.hireDate, person2.salary);

    return 0;
}