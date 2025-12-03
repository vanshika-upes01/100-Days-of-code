#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]s", s.name); // Read full name including spaces
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}