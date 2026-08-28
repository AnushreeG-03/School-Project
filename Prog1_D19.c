Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main(){
int a, b, i;
printf("Enter values: ");
scanf("%d %d", &a, &b);
for(i=1;;i++)
{
if(i%a==0 && i%b==0)
{
printf("%d\n",i);
break;
}
}
return 0;
}
