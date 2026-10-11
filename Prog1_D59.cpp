#include <stdio.h>

int main()
{
    int n, a[100], k, i;
    int sum = 0, maxSum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k <= 0 || k > n)
        return 0;

    for(i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }

    maxSum = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
