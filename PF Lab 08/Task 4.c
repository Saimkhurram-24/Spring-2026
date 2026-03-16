#include <stdio.h>

int main()
{
    int a[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int transpose[3][3];
    int cofactor[3][3];
    int adjoint[3][3];
    int i;
	int j;
    int det;

    printf("Original Matrix\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
        printf("\n");
    }

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
	 transpose[j][i] = a[i][j];
    }
    }
      printf("\nTranspose\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
       printf("%d ",transpose[i][j]);
    }
        printf("\n");
    }

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("\nDeterminant = %d\n",det);

    cofactor[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    cofactor[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    cofactor[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    cofactor[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
    cofactor[1][1]=(a[0][0]*a[2][2]-a[0][2]*a[2][0]);
    cofactor[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

    cofactor[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    cofactor[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    cofactor[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);

    printf("\nCofactor Matrix\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
     printf("%d ",cofactor[i][j]);
    }
        printf("\n");
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
      adjoint[j][i] = cofactor[i][j];
    }
    }

    printf("\nAdjoint Matrix\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf("%d ",adjoint[i][j]);
    }
        printf("\n");
    }

    printf("\nInverse Matrix\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf("%.2f ",adjoint[i][j]/(float)det);
    }
        printf("\n");
    }

    return 0;
}
