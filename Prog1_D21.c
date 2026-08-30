Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>
int main(){
int n, temp, first, last, p=1, result;
printf("Enter value: ");
scanf("%d", &n);
temp=n;
last=n%10;
while (temp>=10)
{
temp= temp/10;
p=p*10;
}
first=temp;
result=last*p+(n%p-last)+first;
printf("%d\n", result);
return 0;
}
