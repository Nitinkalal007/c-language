#include <stdio.h>

int main() {
    float principal, rate, month, interest;
    printf("Enter principal :");
    scanf("%f", &principal);
    printf("Enter the rate :");
    scanf("%f", &rate);
    printf("Enter the time in months: ");
    scanf("%f", &month);
    interest = (principal * rate * month) / 100;
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}