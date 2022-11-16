/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,area,s;              //s=semiperimeter
    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b*s-c));
    printf("the area of triangle with side %d %d %d=%d",a,b,c,area);
}
