#include <stdio.h>

int main()
{
    int n, a[100], i, j, repeated = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                repeated = a[i];
                break;
            }
        }

        if(repeated != -1)
            break;
    }

    printf("%d", repeated);

    return 0;
}

