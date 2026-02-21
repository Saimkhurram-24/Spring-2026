#include<stdio.h>
int main(){
    int salary, service, incentives;
    printf("Enter your salary:");
    scanf("%d", &salary);
    printf("Enter your years of employment: ");
    scanf("%d", &service);
    incentives = (service > 15) ? (salary * 0.35) : (service > 7) ? (salary * 0.20) : (salary * 0.05);
    printf("\nYour incentive amount is %d", incentives);   
}
