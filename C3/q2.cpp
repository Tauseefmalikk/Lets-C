/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/


#include<stdio.h>
int main()
{
    // check for leap year
    int m;
    printf("Enter the year you want to check:\n");
    scanf("%d",&m);
    if (m%4==0)
    {
        printf("The year %d is a leap year.", m);
    }
    else
    {
        printf("The year %d is not a leap year.",m);
    }
  return 0;
}
