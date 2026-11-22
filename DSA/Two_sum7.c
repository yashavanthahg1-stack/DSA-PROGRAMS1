#include <stdio.h>

int main()
{
    int n, i, j, target;
    int nums[100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target:");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}