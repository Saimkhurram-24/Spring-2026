#include <stdio.h>

float check(int s, int a, int v)
{
    float x = 0;

    x = s * 0.6;

    if(a > 6)
        x = x + 2;
    else if(a > 3)
        x = x + 1;

    if(v < 4)
        x = x + 3;
    else if(v < 7)
        x = x + 1.5;

    return x;
}

int main()
{
    int s, a, v;
    float r;

    printf("Severity: ");
    scanf("%d", &s);

    printf("Age risk: ");
    scanf("%d", &a);

    printf("Vitals: ");
    scanf("%d", &v);

    r = check(s, a, v);

    printf("Score = %.2f\n", r);

    if(r >= 9)
        printf("Emergency\n");
    else if(r >= 5)
        printf("Priority\n");
    else
        printf("Normal\n");

    return 0;
}
