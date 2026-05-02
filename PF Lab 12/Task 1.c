A static array like int grades[100] is not a good choice because its size is fixed at compile-time. The compiler decides memory before the program runs. But in this case, the number of students is only known at runtime after enrollment. If students are more than 100, array will overflow. If less, memory is wasted. So static arrays are not flexible for this situation.
(b)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float *grades;

    printf("Enter number of students: ");
    scanf("%d",&n);

    grades = (float*)malloc(n * sizeof(float));

    if(grades == NULL)
    {
        printf("Memory not allocated");
        return 0;
    }

    for(i=0;i<n;i++)
    {
        printf("Enter grade of student %d: ",i+1);
        scanf("%f",&grades[i]);
    }

    printf("Grades are:\n");

    for(i=0;i<n;i++)
    {
        printf("%.2f\n",grades[i]);
    }

    free(grades);

    return 0;
}
(c)
If free() is not used, the allocated memory will not be returned to the system. This problem is called a memory leak. Over time, if this happens again and again, the program will consume more and more memory, which can slow down the system or even crash it.
