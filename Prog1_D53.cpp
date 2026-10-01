#include <stdio.h>

int main()
{
    int n, nums[100];
    int i, total = 0, leftSum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - nums[i])
        {
            printf("%d", i);
            return 0;
        }

        leftSum = leftSum + nums[i];
    }

    printf("-1");

    return 0;
}
