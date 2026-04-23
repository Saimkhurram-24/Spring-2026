#include <stdio.h>
#include <string.h>

struct Department
{
    char deptCode[10];
    char deptName[50];
};

struct Course
{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void searchByDept(struct Course c[], int n, char code[])
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(strcmp(c[i].dept.deptCode, code) == 0)
        {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s\n", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            printf("Department: %s (%s)\n", c[i].dept.deptName, c[i].dept.deptCode);
            found = 1;
        }
    }

    if(found == 0)
        printf("No courses found for this department\n");
}

int main()
{
    struct Course c[3];
    int i;
    char code[10];

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details for course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);

        printf("Course Name: ");
        scanf(" %[^\n]", c[i].courseName);

        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Department Code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Department Name: ");
        scanf(" %[^\n]", c[i].dept.deptName);
    }

    printf("\nAll Courses:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nCourse Code: %s\n", c[i].courseCode);
        printf("Course Name: %s\n", c[i].courseName);
        printf("Credit Hours: %d\n", c[i].creditHours);
        printf("Department: %s (%s)\n", c[i].dept.deptName, c[i].dept.deptCode);
    }

    printf("\nEnter department code to search: ");
    scanf("%s", code);

    searchByDept(c, 3, code);

    return 0;
}
