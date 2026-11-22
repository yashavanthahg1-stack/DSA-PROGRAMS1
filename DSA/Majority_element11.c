
#include <stdio.h>
#include <stdlib.h>

int majorityElement(int a[], int n)
{
    int candidate = a[0], count = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
            candidate = a[i];

        if(a[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == candidate)
            count++;
    }

    if(count > n/2)
        return candidate;

    return -1;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n <= 0)
        return 1;

    int *a = malloc(n * sizeof(int));

    if(a == NULL)
        return 1;

    printf("Enter elements: ");

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int result = majorityElement(a, n);

    if(result == -1)
        printf("No majority element");
    else
        printf("Majority element = %d", result);

    free(a);

    return 0;
}
