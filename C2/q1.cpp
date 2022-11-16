*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, s ).
Hint: r = sqrt ( x2 + y2 ) and s = tan-1 ( y / x )*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r,s;
    printf("Enter the x and y co-ordinates:\n");
    scanf("%d %d",&x,&y);
    r = sqrt(x*x + y*y);
    s = atan(y/x);
    printf("The polar co-ordinates of x,y = %d,%d",r,s);
    return 0;
}
