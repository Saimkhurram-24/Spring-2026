#include<stdio.h>
int main(){
	int type, size, flight;
	printf("Select your luggage type,\n1. Handbag\n2. Checked Bag\n3. Sports Equipment\n\nSelect from 1-3:");
	scanf("%d",&type);
	if(type == 1){
		printf("\nSelect the size of your Handbag,\n1. Small\n2. Large\n\nSelect from 1-2: ");
		scanf("%d", &size);
		if(size == 1){
			printf("\nRs.100 per KG");
		} else if(size == 2){
			printf("\nRs.200 per KG");
		}
	}
	if(type == 2){
		printf("Select your flight type,\n1. Domestic\n2. International\nSelect from 1-2: ");
		scanf("%d", &flight);
		if (flight == 1){
			printf("\nRs.300 per KG");
		}
		if(flight == 2){
			printf("\nRs.500 per KG");
		}
	}
	if(type == 3){
		printf("\nRs.1000 per KG");
	}
}
