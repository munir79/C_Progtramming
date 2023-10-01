#include<stdio.h>

int main(){
    int password,choice,mobile,amount,balance=10000;
printf(" ...............wellcome to Online money Express.......................\n\n\n");
printf("Enter Your password:");

scanf("%d",&password);
printf("\n\n");
if(password==1234){
    printf("Bks\n");
    printf("Your CurrentBalance:%d\n\n",balance);
    printf("1.send Money\n");
    printf("2.Mobile Recharge\n");
    printf("3.Payment\n");
    printf("4.CashaOut\n");
    printf("5.Paybill\n\n");
    printf("enter your Choice:");
    scanf("%d",&choice);
    printf("\n\n");
    if(choice==1){
        printf("enter your Mobile Number:");
        scanf("%d",&mobile);
        printf("\n");
        printf("enter your amount:");
        scanf("%d",&amount);
        printf("\n");
        printf("enter your password:");
        scanf("%d",&password);
        printf("\n");
        if(password==1234){
            if(balance<amount){
                printf("sorry you have not enough Amount");
               
                 printf("your payment has benn successfully\n");
          int newBalance=balance-amount;
          printf("your Current balance:%d",&newBalance);
            }
         
        }
        
        else{
            printf("wrong password");
        }

    }
}
else{
    printf("sorry Your pin is Incorrect and try again");
}

}