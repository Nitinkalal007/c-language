// left half pyramid- repiting line number
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= (6 - i); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
