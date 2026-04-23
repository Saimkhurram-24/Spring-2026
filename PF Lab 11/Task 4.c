#include <stdio.h>

struct Patient
{
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n)
{
    int i;

    printf("\nAll Patient Records:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Blood Type: %s\n", p[i].bloodType);
        printf("Patient ID: %d\n", p[i].patientID);
        printf("Diagnosis: %s\n", p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(p[i].patientID == id)
        {
            printf("\nPatient Found:\n");
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Patient ID: %d\n", p[i].patientID);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient not found\n");
}

int main()
{
    struct Patient p[5];
    int i, id;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter data for patient %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Blood Type: ");
        scanf("%s", p[i].bloodType);

        printf("Patient ID: ");
        scanf("%d", &p[i].patientID);

        printf("Diagnosis: ");
        scanf(" %[^\n]", p[i].diagnosis);
    }

    displayAll(p, 5);

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    searchByID(p, 5, id);

    return 0;
}
