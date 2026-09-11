#include <stdio.h>
int main(){
int n, a[100], x, i, pos;
printf("Enter value: ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
scanf("%d", &x);
pos = n;
for(i = 0; i < n; i++)
{
if(x < a[i])
{
pos = i;
break;
}
}
for(i = n; i > pos; i--)
{
a[i] = a[i - 1];
}
a[pos] = x;
n++;
for(i = 0; i < n; i++)
{
printf("%d", a[i]);
if(i < n - 1)
printf(" ");
}
return 0;
}
