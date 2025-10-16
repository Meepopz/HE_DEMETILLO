#include <stdio.h>

int main()
{
    int amountdeposit = 500;
    int amount;
    int choice;

do{
    printf("DEMILLZ BANK\n\n");
    printf("Please select your transaction\n");

    printf("[1] Balance Inquiry\n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Exit\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Your current balance: P%d.00 \n", amountdeposit);
        break;

    case 2:
        do
        {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            if (amount >= 100)
            {
                amountdeposit += amount;
                printf("P%d.00 deposited successfully!\n", amount);
            }
            else
            {
                printf("Please try again!\n");
            }

        } while (amount <= 100);
        break;

    case 3:
        do
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount >= 100 && amount <= amountdeposit)
            {
                amountdeposit -= amount;
                printf("You withdrew P%d.00 successfully!\n", amount);
            }
            else
            {
                printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
            }

        } while (amount <= 100);
        break;

    case 4:
        printf("Thank you for using DEMILLZ Bank. Thank you and come again!");
        break;

    default:
        printf("Invalid option. Please try again.\n");
    }
}

while(choice != 4);

    return 0;
}