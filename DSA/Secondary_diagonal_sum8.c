#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;
    int a[100][100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter matrix:");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][n-1-i];
    }

    printf("Sum of diagonal matrix: %d", sum);

    return 0;
}