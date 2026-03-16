#include <stdio.h>
int main()
{
    int a[5][5] = {{1,0,0},{0,1,0},{0,0,1}};
    int r = 3;
	int c = 3;
    int i,j;
    int zero=1, identity=1, diagonal=1, scalar=1;
    int upper=1, lower=1, symmetric=1, skew=1;
    int det;

    if(r==c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    if(r==1)
        printf("Row Matrix\n");

    if(c==1)
        printf("Column Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
                zero=0;

            if(i!=j && a[i][j]!=0)
                diagonal=0;

            if(i!=j && a[i][j]!=0)
                identity=0;

            if(i!=j && a[i][j]!=0)
                scalar=0;

            if(i>j && a[i][j]!=0)
                upper=0;

            if(i<j && a[i][j]!=0)
                lower=0;

            if(a[i][j]!=-a[j][i])
                skew=0;

            if(a[i][j]!=a[j][i])
                symmetric=0;
        }
    }

    if(zero)
        printf("Zero Matrix\n");

    if(diagonal)
        printf("Diagonal Matrix\n");

    if(identity)
        printf("Identity Matrix\n");

    if(scalar)
        printf("Scalar Matrix\n");

    if(upper)
        printf("Upper Triangular Matrix\n");

    if(lower)
        printf("Lower Triangular Matrix\n");

    if(symmetric)
        printf("Symmetric Matrix\n");

    if(skew)
        printf("Skew Symmetric Matrix\n");

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    if(det==0)
        printf("Singular Matrix\n");
    else
        printf("Non-Singular Matrix\n");

    return 0;
}
