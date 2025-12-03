#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee with nested Date
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    scanf(" %[^\n]s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}