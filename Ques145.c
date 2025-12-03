#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the student with highest marks
struct Student getTopStudent(struct Student students[], int n) {
    int top_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }
    return students[top_index];
}

int main() {
    int n = 5;
    struct Student students[5];

    // Input details for n students
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get top student
    struct Student top = getTopStudent(students, n);

    // Display top student's details
    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}