# include<stdio.h>
int main (){
    int langchoice,serviceChoice;

    printf("press 1 for english");
    printf("press 2 for hindi");
    printf("press 3 for gujrati");
    printf("enter your choice");
    printf("%d",&langchoice);

    switch (langchoice)
    {
    case 1://english
        printf("press 1 for internt recharge");
        printf("press 2 for top-up recharge");
        printf("press 3 for speical recharge");
        printf("enter your choice");
        switch (serviceChoice)
        {
        case 1:
        printf("you have succfully done internt recharge/n");
        break;
        case 2:
        print("you have done succfully done top-up recharge/n");
        break;
        case 3:
        print("you have done succfully  done special recharge/n");
        break;
        default:
        print("invalid service choice");
            
        }
        break;

        case 2://hindi
        printf("internt recharge ke liye 1 dabayie");
        printf("top-up recharge ke liye 2 dabayie");
        printf("special recharge ke liye 3 dabiye");
        printf("enter your chaice");
        switch (serviceChoice)
        {
        case 1:
            printf("aapne safalta purvak internt recharge kiya/n");
            break;
        case 2:    
            printf("aapne safalta purvak top-up recharge kiya/n");

            break;
        case 3:
            printf("aapne safalta puravak spcial recharge kiya/n");
            break;
        
        default:
            printf("galat seva vikalp");
            
        }
        break;


        case 3:// gujarati
        printf("internt reacharge mate 1 dabavo");
        printf("top-up recharge mate 2 dabavo ");
        printf("special recharge mate 3 dabavo");
        printf("enter your choice");
        switch (serviceChoice)
        {
        case 1:
        printf("tamaru internt recharge safalta purvak thai chukeyu che /n");
        break;
        case 2:
        printf("tamaru top-up recharge safalta puravak thai chukeyu che/n ");
        break;
        case 3:
        printf("tamaru speical recharge safalta puravak thai chukeyu che/n");
        break;
        default:
        printf("khoti seva no vikalp");

            

        }
        break;

        default:
        printf("invalid language choice/n");



    }
    return 0;
}