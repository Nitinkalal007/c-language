#include <stdio.h>

int main() {
    int langChoice, serviceChoice;

    printf("For example,\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &langChoice);

    switch(langChoice) {
        
        case 1: // English
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);
            switch(serviceChoice) {
                case 1:
                    printf("You have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("Invalid service choice.\n");
            }
            break;

        case 2: // Hindi
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);
            switch(serviceChoice) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kiya hai.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kiya hai.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kiya hai.\n");
                    break;
                default:
                    printf("Galat seva vikalp.\n");
            }
            break;

        case 3: // Gujarati
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);
            switch(serviceChoice) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                    break;
                default:
                    printf("Khoto seva vikalp.\n");
            }
            break;

        default:
            printf("Invalid language choice.\n");
    }

    return 0;
}
