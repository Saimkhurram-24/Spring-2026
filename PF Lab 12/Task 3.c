(a)
calloc is better because it allocates memory at runtime and also initializes all bytes to 0. In this case, the sensor buffer must start from 0.0 to avoid garbage values. malloc only allocates memory but does not initialize it, so it may contain random values. That is why calloc is safer here.
(b)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float *buffer;

    printf("Enter number of sensors: ");
    scanf("%d",&n);

    buffer = (float*)calloc(n, sizeof(float));

    if(buffer == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Initial values:\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\n",buffer[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter temperature for sensor %d: ",i+1);
        scanf("%f",&buffer[i]);
    }

    printf("Updated readings:\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\n",buffer[i]);
    }

    free(buffer);
    buffer = NULL;

    return 0;
}
(c)
Method
Values after allocation
malloc
Garbage (random values)
calloc
0.0, 0.0, 0.0, ...
