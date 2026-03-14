#include<stdio.h>
int main()
{
  int seats[5][6]={{0,1,1,0,0,1},{1,1,1,1,0,0},{1,0,1,0,1,0},{0,1,0,1,0,1},{0,0,0,1,1,1}};
  int available=0;
  int max =0;
  int booked,row;
  
  for(int i=0;i<5;i++){
  for(int j=0;j<6;j++){
  if(seats[i][j] == 0){
         available++;
          }   
       }
    }   
     printf("Available Seats = %d\n",available);
     
   for(int i=0;i<5;i++){
     booked=0;
   for(int j=0;j<6;j++){
   if(seats[i][j]==1){
      booked++;
     }
   }
    if(booked>max)
	{
	max=booked;
	row=i;
    }
  }
  printf("Row with maximum booked seats = %d\n",row+1);
  return 0;
}
