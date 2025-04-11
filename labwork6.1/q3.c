//print 1 to using n
#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    return 0;
}
