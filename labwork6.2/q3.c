// Print even numbers from 1 to N using a do-while loop
#include <stdio.h>

int main() {
    int i = 2, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    do {
        printf("%d ", i);
        i += 2;
    } while (i <= n);

    return 0;
}
