#include <stdio.h>
#include <conio.h>
// ATM Projesi

// Withdrawal ✓
// Cash Deposit
int main()
{
        system("COLOR E");
        int pass = 2244, money = 500;
        int select, withdrawal, answer;
        printf("\t\t\t\t\t********Welcome********\n\n\n");
        sleep(1);
bas:
        printf("Please enter the password: ");
        scanf("%d", &pass);

        if (pass == 2244)
        {

                printf("\n1- WITHDRAWAL\n\n");
                printf("2- CASH DEPOSIT\n\n");
                printf("3- BALANCE ENQUIRY\n\n");
                printf("4- PIN CHANGE\n\n");
                printf("5- MOBILE RECHARGE\n\n");
        donus:
                printf("Select this one: ");
                scanf("%d", &select);

                switch (select)
                {
                case 1:
                        printf("You have a %d $ money. \n\n", money);
                        printf("How much money will you withdraw?: ");
                        scanf("%d", &withdrawal);

                        printf("You withdraw %d dollar money. You sure? Yes(1)No(2): ", withdrawal);
                cevap:
                        scanf("%d", &answer);

                        if (answer == 1)
                        {
                                money -= withdrawal;
                                printf("\nYou have a %d dollar money.\n\n", money);
                                goto donus;
                        }
                        else if (answer == 2)
                        {
                                printf("Process is cancel. You return main menu...\n\n");
                                goto donus;
                        }
                        else
                        {
                                printf("Enter the Yes(1) or No(2): \n");
                                goto cevap;
                        }

                        goto donus;
                        break;

                case 2:

                        goto donus;
                        break;

                default:
                        printf("Enter is incorrect. Please try again\n\n");
                        goto donus;
                        break;
                }
        }

        else
        {
                printf("\nPassword is incorrect. Please try again...\n\n");
                goto bas;
        }

        getch();
        return 0;
}