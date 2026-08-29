Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
long long n, temp, divisor=1;
int digit;
printf("Enter value: ");
scanf("%lld", &n);
temp=n;
while(temp>=10)
{
divisor=divisor*10;
temp=temp/10;
}
while(divisor>0)
{
digit=(n/divisor)%10;
if(digit==0)
printf("1");
else
printf("0");
divisor=divisor/10;
}
return 0;
}
