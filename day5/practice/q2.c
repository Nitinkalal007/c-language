#include <stdio.h>

int main() {
    float length, area;
    printf("Enter the length of the square: ");
    scanf("%f", &length);
    area = length * length;
    printf("Area of the square: %.2f\n", area);
    return 0;
}