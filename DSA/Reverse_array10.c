#include <stdio.h>

int main()
{
    int n, a[100], i;
    int left, right, temp;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    left = 0;
    right = n - 1;

    while(left < right)
    {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array:");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}