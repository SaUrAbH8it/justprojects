#include <stdio.h>
int main ()
{
    int ac_num,ac_pn,ac1,ac2,ac3,ac1_bl,ac2_bl,ac3_bl,ac1_pn,ac2_pn,ac3_pn,wth,ew;

    /*User Accounts
    ac1 = 11111111
    ac2 = 22222222
    ac3 = 33333333
    */

    //ACCOUNT BALANCES
    ac1_bl = 100000;
    ac2_bl = 200000;
    ac3_bl = 300000;

    //ACCOUNT PINS
    ac1_pn = 1111;
    ac2_pn = 2222;
    ac3_pn = 3333;

    //ASKING ACCOUNT NUMBER
    printf("Please Enter Your Account Number : ");
    scanf("%d",&ac_num);

    switch(ac_num)
    {
    case 11111111 :
        printf("Please Enter Your Pin Code : ");
        scanf("%d",&ac_pn);
        if (ac_pn == ac1_pn)  //CHECKING IF THE PIN IS CORRECT OR NOT
        {
            printf("\nPress 1 for Balance enquiry\n");   //ASKING USER IF HE/SHE WANTS TO WITHDRAW CASH OR JUST WANTS TO KNOW THE BALANCE
            printf("Press 2 for cash withdrawal\n\n");
            scanf("%d",&ew);
            if (ew == 1)
            {
                printf("Your Current Balance is : Rs %d \n\n",ac1_bl);
            }
            else
            {
                printf("How much cash you want to withdraw ? : ");
                scanf("%d",&wth);
                printf("\n\nSUCCESSFUL");
                printf("\n\nRemaining Balance = %d \n\n", ac1_bl - wth);
            }
        }
        else
        {
            printf("Incorrect pin");
        }
        break;



    case 22222222 :
        printf("Please Enter Your Pin Code : ");
        scanf("%d",&ac_pn);
        if (ac_pn == ac2_pn)
        {
            printf("\nPress 1 for Balance enquiry\n");
            printf("Press 2 for cash withdrawal\n\n");
            scanf("%d",&ew);
            if (ew == 1)
            {
                printf("Your Current Balance is : Rs %d \n\n",ac2_bl);
            }
            else
            {
                printf("How much cash you want to withdraw ? : ");
                scanf("%d",&wth);
                printf("\n\nSUCCESSFUL");
                printf("\n\nRemaining Balance = %d \n\n", ac2_bl - wth);
            }
        }
        else
        {
            printf("Incorrect pin");
        }
        break;



    case 33333333 :
        printf("Please Enter Your Pin Code : ");
        scanf("%d",&ac_pn);
        if (ac_pn == ac3_pn)
        {
            printf("\nPress 1 for Balance enquiry\n");
            printf("Press 2 for cash withdrawal\n\n");
            scanf("%d",&ew);
            if (ew == 1)
            {
                printf("Your Current Balance is : Rs %d \n\n",ac3_bl);
            }
            else
            {
                printf("How much cash you want to withdraw ? : ");
                scanf("%d",&wth);
                printf("\n\nSUCCESSFUL");
                printf("Remaining Balance = %d \n\n", ac3_bl - wth);
            }
        }
        else
        {
            printf("Incorrect pin");
        }

        break;


    default:
        printf("Account Does Not Exist");


    }

}
