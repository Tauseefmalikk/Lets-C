/*area and perimeter calculator*/

#include<stdio.h>
#include<string.h>

int main()
{
    int rad, len,wid;
    int area, peri;
    char inp[50];
    printf("Enter the shape for which you want to calculate area and perimeter: \n");
    scanf("%s",&inp);
    int val = strcmp(inp,"rectangle");
    if(val == 0)
    {
        printf("Enter the length and width:\n");
        scanf("%d %d",&len,&wid);
        area = len * wid;
        peri = 2 * (len + wid);
    }
    else
    {
        printf("Enter the radius of the circle:\n");
        scanf("%d",&rad);
        area = 3.147 * rad*rad;
        peri = 2 * 3.147 * rad;
    }
    printf("The perimeter and area of %s are: %d %d",inp,peri,area);
    return 0;
}
