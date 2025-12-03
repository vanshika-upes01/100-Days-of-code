#include <stdio.h>
#include <stdlib.h>

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
    FILE *fp;
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

    // Write employee data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee data written to file successfully.\n");

    // Read employee data from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Employee emp_read;
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\nEmployee Details from File:\n");
    printf("Name: %s\n", emp_read.name);
    printf("Employee ID: %d\n", emp_read.emp_id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joining_date.day,
           emp_read.joining_date.month,
           emp_read.joining_date.year);

    return 0;
}