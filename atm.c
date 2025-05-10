#include<stdio.h>
int main(){
int pin;
printf("Enter the pin ");
scanf("%d",&pin);
float amount;
int choice;
float balance;
float withdraw;
while(1){
    printf("ATM MENU BAR\n");
    printf("1.Check balance\n 2.Deposit money\n 3.Withdraw money\n 4.exit\n");
    printf("Enter your choice");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Your current balance=%2f\n",balance);
        break;
    case 2:
    //deposit money
    printf("Enter amount deposit\n");
    scanf("%f",&amount);
    if(amount>0){
        balance=amount+balance;
        printf("%2f deposited succesfully\n",amount);
    }
    else{
        printf("Invalid deposit amount\n");
    }
    break;
    case 3:
    //withdraw money
   printf("Enter the withdrawal amount");
   scanf("%f",&withdraw);
   if(withdraw>0 && balance>=withdraw){
    balance=balance-withdraw;
    printf("%2f withdraw succesfully\n",withdraw);
   }
   else if(withdraw>balance){
    printf("Insufficient balance\n");
   }
   else{
    printf("Invalid withdrwal amount");
   }
   break;
   case 4:
   //exit
   printf("Thank you\n");
   break;

    default:
    printf("Invalid choice\n");
        break;
    }


}
return 0;
}