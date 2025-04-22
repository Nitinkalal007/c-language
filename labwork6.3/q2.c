// Factorial of number N using a for loop
#include <stdio.h>

int main() {
    int N;
    unsigned long long factorial = 1;
    printf("Enter any number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("The factorial is: %llu\n", factorial);
    return 0;
}
