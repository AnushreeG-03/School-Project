#include <stdio.h>

int main()
{
    int n, a[100], ans[100];
    int i, prefix = 1, suffix = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix = prefix * a[i];
    }

    for(i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * suffix;
        suffix = suffix * a[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d", ans[i]);

        if(i < n - 1)
            printf(" ");
    }

    return 0;
}
