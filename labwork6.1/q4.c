//print odd number 
#include <stdio.h>

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        n--;  
    }

    while (n >= 1) {
        printf("%d ", n);
        n -= 2;
    }
    return 0;
}
