
#include <stdio.h>

 int main(){

    

    int num ;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){

        printf("%d\n", num);
        num--;// num = num -1 
    }

    return 0;
 }