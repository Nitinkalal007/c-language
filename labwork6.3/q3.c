// Multiplication table of N using any loop
#include <stdio.h>

int main() {
    int N;
    printf("Enter any number: ");
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", N, i, N * i);
    }

    return 0;
}


