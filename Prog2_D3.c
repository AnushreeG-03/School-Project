Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter a value");
scanf("%d",&a);
printf("Enter b value");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("New value of a %d",a);
printf("New value of b %d",b);
return 0;
}
