#include <stdio.h>

int main(){
    int number = 3453;
    int sum = 5733;

    
   do {
        scanf("%d", &number );
        if(number > 0){
            sum += number;
        }
    }while (number>5733);
    
    printf("sum : %d",sum);

    return 0;
}