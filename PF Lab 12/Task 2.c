(a) & (b)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *contacts;

    contacts = (int*)malloc(3 * sizeof(int));

    if(contacts == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    for(i=0;i<3;i++)
    {
        printf("Enter contact id %d: ",i+1);
        scanf("%d",&contacts[i]);
    }

    int *temp;
    temp = (int*)realloc(contacts, 5 * sizeof(int));

    if(temp == NULL)
    {
        printf("Reallocation failed");
        free(contacts);
        return 0;
    }

    contacts = temp;

    for(i=3;i<5;i++)
    {
        printf("Enter contact id %d: ",i+1);
        scanf("%d",&contacts[i]);
    }

    printf("All contacts:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",contacts[i]);
    }

    free(contacts);
    contacts = NULL;

    return 0;
}
(c)
If realloc fails, it returns NULL and the original memory block is still valid. That is why we use a temporary pointer (temp). If we directly assign realloc to the original pointer and it fails, we lose the reference to old memory and cannot free it, causing a memory leak.
