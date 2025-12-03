#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    int top_index = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    // Display the top student
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[top_index].name);
    printf("Roll Number: %d\n", students[top_index].roll_no);
    printf("Marks: %.2f\n", students[top_index].marks);

    return 0;
}