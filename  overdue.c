  #include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate, fineAmount;

    // Input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate fine amount
    fineAmount = fineRate * daysOverdue;

    // Display the information
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}