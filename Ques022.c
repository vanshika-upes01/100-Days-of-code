#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount, percentage;

    // Input cost price and selling price
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (sellingPrice < costPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}