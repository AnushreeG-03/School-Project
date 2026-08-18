Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
 int main(){
 int length=5;
 int breadth=10;
 int Area=length*breadth;
 int Perimeter=2*(length+breadth);
 printf("The Area of the rectangle is %d\n",Area);
 printf("The Perimeter of the rectangle is %d\n",Perimeter);
 return 0;
 }
