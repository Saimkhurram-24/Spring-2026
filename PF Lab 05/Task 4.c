#include<stdio.h>
int main(){
	int type, genre;
	printf("Choose between, \n1. Non Fiction\n2. Fiction\n");
	scanf("%d", &type);
	if(type == 1){
		printf("\nChoose between, \n1. Novel\n2. Comic\n");
		scanf("%d", &genre);
		if(type == 1){
			printf("Rs.600");
		}else if(type == 2){
			printf("RS.300");
		}
	}
	if(type == 2){
		printf("\nChoose between, \n1. Biography\n2. Self Help\n");
		scanf("%d", &genre);
		if(type == 1){
		printf("Rs.800");
		}else if(type == 2){
			printf("RS.500");
	}
	}
}
