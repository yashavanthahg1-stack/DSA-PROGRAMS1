#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int max = INT_MIN, secondMax = INT_MIN;
    int min = INT_MAX, secondMin = INT_MAX;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if(a[i] > secondMax && a[i] != max)
        {
            secondMax = a[i];
        }

        if(a[i] < min)
        {
            secondMin = min;
            min = a[i];
        }
        else if(a[i] < secondMin && a[i] != min)
        {
            secondMin = a[i];
        }
    }

    if(secondMax == INT_MIN || secondMin == INT_MAX)
    {
        printf("Second largest and smallest not found");
    }
    else
    {
        printf("Second largest = %d\n", secondMax);
        printf("Second smallest = %d\n", secondMin);
    }

    return 0;
}