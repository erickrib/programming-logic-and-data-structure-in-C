#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PASSWORD_LENGTH 50

struct BankAccount
{
    char name[MAX_NAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    float balance;
};

void display_menu(struct BankAccount *account)
{
    printf("\n----- Bank Menu -----\n");
    printf("Name: %s\n", account->name);
    printf("Balance: %.2f\n", account->balance);
    printf("1. Check balance\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void check_balance(struct BankAccount *account)
{
    printf("\nYour balance is: %.2f\n", account->balance);
}

void withdraw(struct BankAccount *account)
{
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > account->balance)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        account->balance -= amount;
        printf("%.2f successfully withdrawn\n", amount);
    }
}

void deposit(struct BankAccount *account)
{
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);
    account->balance += amount;
    printf("%.2f successfully deposited\n", amount);
}

int main()
{
    struct BankAccount account;
    int choice;

    printf("Enter your name: ");
    scanf("%s", account.name);
    printf("Enter your password: ");
    scanf("%s", account.password);
    printf("Enter your initial balance: ");
    scanf("%f", &account.balance);

    while (1)
    {
        display_menu(&account);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            check_balance(&account);
            break;
        case 2:
            withdraw(&account);
            break;
        case 3:
            deposit(&account);
            break;
        case 4:
            printf("Thank you for using our bank service\n");
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}
