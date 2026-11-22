#include <stdio.h>

int main()
{
    int n, a[100], i;
    int currentSum, maxSum;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    currentSum = a[0];
    maxSum = a[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + a[i] > a[i])
        {
            currentSum = currentSum + a[i];
        }
        else
        {
            currentSum = a[i];
        }

        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("Largest sum: %d", maxSum);

    return 0;
}