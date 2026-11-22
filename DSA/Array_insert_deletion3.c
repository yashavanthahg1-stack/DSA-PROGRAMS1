#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Insertion
    printf("Enter position and value:");
    scanf("%d%d", &pos, &value);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    printf("Array after insertion:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Deletion
    printf("\nEnter position to delete:");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("\nArray after deletion:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}