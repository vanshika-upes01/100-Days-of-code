#include <stdio.h>
#include <stdlib.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Dynamically allocate memory for a Student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]s", s->name);  // Read full name including spaces
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free dynamically allocated memory
    free(s);

    return 0;
}