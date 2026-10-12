#include <stdio.h>

int main()
{
    int n, a[100], k;
    int i, j, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k <= 0 || k > n)
        return 0;

    for(i = 0; i <= n - k; i++)
    {
        max = a[i];

        for(j = i; j < i + k; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
        }

        printf("%d", max);

        if(i < n - k)
            printf(" ");
    }

    return 0;
}
