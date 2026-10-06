#include <stdio.h>

int main()
{
    int n, x;
    int leftSum = 0, totalSum;

    scanf("%d", &n);

    totalSum = n * (n + 1) / 2;

    for(x = 1; x <= n; x++)
    {
        leftSum = leftSum + x;

        if(leftSum == totalSum - leftSum + x)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
