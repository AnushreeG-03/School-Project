Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
int Totalseconds, hours, minutes, seconds;
scanf("%d",&Totalseconds);
hours=Totalseconds/3600;
minutes=(Totalseconds%3600)/60;
seconds=Totalseconds%60;
printf("%d:%d:%d",hours,minutes,seconds);
return 0;
}
