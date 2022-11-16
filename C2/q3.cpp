/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

#include<stdio.h>

int main()
{
    int a,b,c,d,e,number;
    printf("Enter a five-digit number:\n");
    scanf("%d",&number);
    a = number % 10;
    b = (number/10) % 10;
    c = (number/100) % 10;
    d = (number/1000) % 10;
    e = (number/10000) % 10;
    printf("The reverse order of %d%d%d%d%d is %d.",a,b,c,d,e,number);
    return 0;
}
