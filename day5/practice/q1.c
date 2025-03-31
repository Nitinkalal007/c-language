#include <stdio.h>
int main()
{
    float radius, area,PI;
    const float PI=3.14;
    printf("Enter radius");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    return 0;
}