#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Left Rotation
    temp = a[0];

    for(i = 0; i < n-1; i++)
    {
        a[i] = a[i+1];
    }

    a[n-1] = temp;

    printf("Left rotation:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Right Rotation
    temp = a[n-1];

    for(i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }

    a[0] = temp;

    printf("\nRight rotation:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}