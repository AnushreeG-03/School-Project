#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100], ch;

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Error opening file");
    }
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
