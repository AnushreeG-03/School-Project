Q71: Read and print a matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d", a[i][j]);

            if(j < cols - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
