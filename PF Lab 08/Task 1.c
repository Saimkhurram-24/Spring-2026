#include<stdio.h>
int main ()
{
  int marks[4][3]={{80,75,90},{60,70,85},{88,92,79},{55,65,70}};
  int i,j,total,c,d;

   for(i=0;i<4;i++){
   total=0;
   for(j=0;j<3;j++){
   total=total+marks[i][j];
   }
   printf("Total of student %d = %d\n",i+1,total);
   }
   printf("\n");
   
   for(d=0;d<3;d++){
   total = 0;
   for(c=0;c<4;c++){
   total= total + marks[c][d];
   }
   printf("Average of subject %d = %.2f\n",d+1,total/4.0);
   }
   return 0;
}
