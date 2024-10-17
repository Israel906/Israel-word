#include <stdio.h>
#include <string.h>

// Function declarations
float calculateChargesPerUnit(int units);
float calculateTotalBill(int units, float chargesPerUnit);
void displayBill(int customerID, char customerName[], int units, float chargesPerUnit, float totalBill);

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill;

    // Input: Customer ID, Name, and Units Consumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Function call to determine charges per unit
    chargesPerUnit = calculateChargesPerUnit(unitsConsumed);

    // Function call to calculate the total bill
    totalBill = calculateTotalBill(unitsConsumed, chargesPerUnit);

    // Function to display the bill
    displayBill(customerID, customerName, unitsConsumed, chargesPerUnit, totalBill);

    return 0;
}

// Function to calculate the charges per unit based on units consumed
float calculateChargesPerUnit(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units >= 200 && units < 400) {
        return 1.50;
    } else if (units >= 400 && units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

// Function to calculate the total bill, including surcharge and minimum bill condition
float calculateTotalBill(int units, float chargesPerUnit) {
    float totalBill = units * chargesPerUnit;
    float surcharge = 0.0;

    // Apply surcharge if bill exceeds 400 Ksh
    if (totalBill > 400) {
        surcharge = 0.15 * totalBill;
    }

    // Apply minimum bill condition
    if (totalBill < 100) {
        return 100;
    }

    return totalBill + surcharge;
}

// Function to display the bill details
void displayBill(int customerID, char customerName[], int units, float chargesPerUnit, float totalBill) {
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);
}