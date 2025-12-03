#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthName[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Input date in dd/mm/yyyy format
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Parse the date
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Print in dd-MMM-yyyy format
    if (month >= 1 && month <= 12) {
        printf("Formatted date: %02d-%s-%d\n", day, monthName[month - 1], year);
    } else {
        printf("Invalid month!\n");
    }

    return 0;
}