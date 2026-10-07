#include <stdio.h>

int main()
{
    int n, a[100];
    int i, candidate = 0, count = 0, freq = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = a[i];
            count = 1;
        }
        else if(a[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == candidate)
        {
            freq++;
        }
    }

    if(freq > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}

