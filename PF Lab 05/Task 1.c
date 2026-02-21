#include<stdio.h>
int main(){
	int score, age;
	printf("Enter your fitness score: ");
	scanf("%d", &score);
	printf("Enter your age: ");
	scanf("%d", &age);
	if(score >= 85){
		if(age < 25){
			printf("40%% Discount!");
		}
		else{
			printf("25%% Discount");
		}
	}else if(score >= 70 && age < 30){
		printf("15%% Discount!");
	}else{
		printf("No Discount!");
	}
}
