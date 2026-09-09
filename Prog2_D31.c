Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main(){
int n, a[100], i, temp;
printf("Enter value: ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
for(i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
for(i = 0; i < n; i++)
printf("%d", a[i]);
if(i < n - 1)
printf(" ");
return 0;
}
