#include <stdio.h>

int main()
{
    int vib = 847;
    float temp = 73.6;
    char stat = 'W';

    void *ptr;

    ptr = &vib;
    printf("Vibrations = %d, Address = %p\n", *(int *)ptr, ptr);

    ptr = &temp;
    printf("Temperature = %.1f, Address = %p\n", *(float *)ptr, ptr);

    ptr = &stat;
    printf("Status = %c, Address = %p\n", *(char *)ptr, ptr);

    if(*(char *)ptr == 'N')
        printf("System OK\n");
    else if(*(char *)ptr == 'W')
        printf("Warning: Check system!\n");
    else if(*(char *)ptr == 'C')
        printf("CRITICAL ALERT!\n");

    return 0;
}
