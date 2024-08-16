#include<stdio.h>

int main()
{
    int n,a;
    printf("Press 1 for English\tPress 2 for Hindi\tPress 3 for Gujarati\n");
    printf("Enter your choice : ");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
            //int a;
            printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
            printf("Enter your choice : ");
            scanf("%d",&a);
            switch (a)
            {
                case 1:
                    printf("\nYou have successfully done a Internet Recharge.");
                    break;
                case 2:
                    printf("\nYou have successfully done a Top-up Recharge.");
                    break;
                case 3:
                    printf("\nYou have successfully done a Special Recharge.");
                    break;
            
                default:
                    printf("\nInvalid No. !!!");
                    break;
            }
            break;
        case 2:
            //int a;
            printf("\nInternet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice : ");
            scanf("%d",&a);
            switch (a)
            {
                case 1:
                    printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
                    break;
                case 2:
                    printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
                    break;
                case 3:
                    printf("\nAapne safaltapurvak Special Recharge kar liya he.");
                    break;
            
                default:
                    printf("\nInvalid No. !!!");
                    break;
            }
            break;
        case 3:
            //int a;
            printf("\nInternet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");
            printf("Enter your choice : ");
            scanf("%d",&a);
            switch (a)
            {
                case 1:
                    printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
                    break;
                case 2:
                    printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
                    break;
                case 3:
                    printf("\nTame safaltapurvak Special Recharge karyu chhe.");
                    break;
            
                default:
                    printf("\nInvalid No. !!!");
                    break;
            }
            break;
    
        default:
            printf("\nInvalid No.");
            break;
    }

    return 0;
}