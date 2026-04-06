#include <stdio.h>

int main()
{
    int scores[6] = {45, 60, 38, 55, 50, 42};
    int *ptr = scores;
    int max = scores[0];

    printf("Original scores: ");
    for(int i = 0; i < 6; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    for(int i = 1; i < 6; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    for(int i = 0; i < 6; i++)
    {
        * (ptr + i) = (*(ptr + i) * 100) / max;
    }

    printf("Scaled scores:   ");
    for(int i = 0; i < 6; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    return 0;
}
