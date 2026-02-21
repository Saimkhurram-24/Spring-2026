#include<stdio.h>
int main(){
    int s1,s2,s3,s4;
    printf("Enter the length of side 1: ");
    scanf("%d",&s1);
    printf("Enter the length of side 2: ");
    scanf("%d",&s2);
    printf("Enter the length of side 3: ");
    scanf("%d",&s3);
    printf("Enter the length of side 4: ");
    scanf("%d",&s4);
    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s4 <= 0){
        printf("\nNot a valid quadrilateral!");
    }else if (s1 == s2 && s2 == s3 && s3 == s4 && s4 == s1){
        printf("\nThe quadrilateral is a square!");
    } else if (s1 == s3 && s2 == s4){
        printf("\nThe quadrilateral is a rectangle!");
    } else{
        printf("General quadrilateral!");
    }
}
