#include <stdio.h>
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int c[3][3];
    int r1=3, c1=3, r2=3, c2=3;
    int i,j,k;

    printf("Matrix a\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix b\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(c1 != r2)
    {
        printf("\nMultiplication not possible\n");
        return 0;
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j] = 0;

            for(k=0;k<c1;k++)
            {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }

    printf("\nMatrix c\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
