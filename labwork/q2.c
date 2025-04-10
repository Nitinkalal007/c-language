#include <stdio.h>

int main() {
    int a = 8, b = 3, c = 12, min;

    // Taking input
    

    // Finding minimum using ternary operator
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Printing the minimum value
    printf("The minimum value is: %d\n", min);
return 0;
    
}


// int a = 30,b  = 40;
    // int min;

    // min = (a > b) ? (min = b) : ( min = a);

    // printf("%d",min);
    // return 0;