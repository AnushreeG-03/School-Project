#include <stdio.h>

int main()
{
    int n, a[100], i, j, greater;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        greater = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(a[j] > a[i])
            {
                greater = a[j];
                break;
            }
        }

        if(i > 0)
            printf(",");

        printf("%d", greater);
    }

    return 0;
}
