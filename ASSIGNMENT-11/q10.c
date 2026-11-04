#include <stdio.h>
static float balance = 1000.0;
void deposit(float amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
        printf("Deposited: Rs. %.2f\n", amount);
    }
}
void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawn: Rs. %.2f\n", amount);
    }
}
void displayBalance(void)
{
    printf("Current Balance: Rs. %.2f\n", balance);
}
#include <stdio.h>
extern void deposit(float amount);
extern void withdraw(float amount);
extern void displayBalance(void);

int main()
{
    printf("Initial ");
    displayBalance();

    deposit(500.0);
    displayBalance();

    withdraw(300.0);
    displayBalance();

    return 0;
}
