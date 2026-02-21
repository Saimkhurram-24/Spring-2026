#include<stdio.h>
int main(){
	int data,type;
	printf("Enter your data usage: ");
	scanf("%d", &data);
	printf("\nEnter your costumer type,\n1. Prepaid\n2. Postpaid\nChoose between 1-2: ");
	scanf("%d",&type);
	if(data <= 2){
		printf("Rs.50 per GB");
	}
	if(data > 2 && data <= 10){
		if(type == 1){
			printf("Rs.40 per GB");
		}
		if(type == 2){
			printf("Rs.35 per GB");
		}
	}
	if(data > 10){
		printf("Rs.25 per GB");
	}
}
