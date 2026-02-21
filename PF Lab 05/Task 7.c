#include<stdio.h>
int main(){
    int card, pin, trans, amount = 10000;
    printf("Enter your Card Number (10 Digits): ");
    scanf("%d",&card);
    if(card == 1234567890){
        printf("Enter your Pin (5 Digits): ");
        scanf("%d",&pin);
        if(pin == 12345){
            printf("Account Balance = %d\nEnter your transaction amount: ",amount);
            scanf("%d",&trans);
            if(trans <= amount){
                printf("\nTransaction Successful!");
            }else{
                printf("\nInsufficient Funds!");
            }
        }else{
            printf("Invalid Pin!");
        }
    }else{
        printf("\nInvalid Card!");
    }
}
