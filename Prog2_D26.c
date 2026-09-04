Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>
int main(){
int i, j;
for(i = 1; i <= 5; i++)
{
if(i == 1 || i == 5)
j = 1;
else if(i == 2 || i == 4)
j = 3;
else
j = 5;
while(j > 0)
{
printf("*\n");
j--;
}
if(i < 5)
printf("\n");
}
return 0;
}
