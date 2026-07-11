#include <stdio.h>

void experi(void);

int main() {
    experi();
    return 0;
}

void experi(void) {
    int years, principal;
    float initialAmount, interestRate;

    printf("Enter principal amount: ");
    scanf("%d", &principal);
    while (getchar() != '\n'); // Clear input buffer

    printf("Enter number of years: ");
    scanf("%d", &years);
    while (getchar() != '\n'); // Clear input buffer

    printf("Enter initial amount/loan amount: ");
    scanf("%f", &initialAmount);
    while (getchar() != '\n'); // Clear input buffer

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    while (getchar() != '\n'); // Clear input buffer

    printf("Principal: %d, Years: %d, Initial Amount: %.2f, Interest Rate: %.2f\n",
           principal, years, initialAmount, interestRate);

    float simpleInterest = (principal * interestRate * years) / 100.0f;
    printf("Simple Interest: %.2f\n", simpleInterest);

    float finalValue = initialAmount + simpleInterest;
    printf("Final Value: %.2f\n", finalValue);
}