#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // Read full line including spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Store records in file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);

    printf("\nStudent records saved to students.txt\n");

    // Read and display records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(file);

    return 0;
}