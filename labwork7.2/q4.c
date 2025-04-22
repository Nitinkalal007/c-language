// inverted left half pyramid- binary pattern
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int space = 0; space < 5 - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}
