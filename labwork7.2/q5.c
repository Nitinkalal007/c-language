// inverted left half pyramid- revers number
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
