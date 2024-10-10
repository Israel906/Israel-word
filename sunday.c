#include <stdio.h>

int main() {
    // Declare variables
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge = 0.0;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", &customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges based on units consumed
    if (unitsConsumed < 200) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargePerUnit;

    // Apply surcharge if the total bill exceeds Ksh 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

    // Ensure minimum bill is Ksh 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the bill details
    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID       : %d\n", customerID);
    printf("Customer Name     : %s\n", customerName);
    printf("Units Consumed    : %d\n", unitsConsumed);
    printf("Charge per Unit   : %.2f\n", chargePerUnit);
    printf("Surcharge         : %.2f\n", surcharge);
    printf("Total Amount to Pay: %.2f\n", totalBill);
    printf("----------------------------\n");

    return 0;
}