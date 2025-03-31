#include <stdio.h>
int main()
{
    // int 2hello=44;  ///error
    int hello2 = 44; /// 44
    printf("%d", hello2);

    int Int = 10; /// 10
    printf("\n%d", Int);

    int _first = 22; /// 22
    printf("\n%d", _first);

    int $second = 455; /// 455
    printf("\n%d", $second);

    // int @second=55;   /// 55
    // printf("\n%d",@second);

    char *first_name = "hello";
    printf("\n%s", first_name);

    int a, b, c;
    a = 66;
    printf("\n%d", a);

    int x, y, z = 29;
    printf("\n%d", x); /// garbage value
    printf("\n%d", y); /// garbage value
    printf("\n%d", z); /// 29
}