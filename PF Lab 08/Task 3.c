#include<stdio.h>
int main()
{
 int temp[7][3]={{36,45,37},{35,32,42},{41,33,30},{36,46,40},{37,38,39},{38,39,40},{38,39,37}};
 int max = temp[0][0];
 int total;

 for(int i=0;i<7;i++){
 total = 0;
 for(int j=0;j<3;j++){
 total = total + temp[i][j];
 if(temp[i][j]>max){
 max = temp[i][j];
     }
   } 
 printf("Average of day %d = %.2f\n",i+1,total/3.0);
   }
 printf("\n");
 printf("Highest temprature in week = %d\n",max);
 return 0;
}
