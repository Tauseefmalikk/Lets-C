/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/
#include<stdio.h>
int main()
{
    float distance,InCentimeters,InMeters,Infeet,InInches;
    printf("Enter the distance between the in cities in km:\n");
    scanf("%f",&distance);
    InCentimeters = distance*100000;
    InMeters = distance*1000;
    Infeet = distance*3280.84;
    InInches = distance*39370.1;
    printf("The %f km in meters =%f m, in centimeter = %f cm, in feet = %f ft and in inches = %f inches.",distance,InCentimeters,InMeters,Infeet,InInches);
    return 0;
    
}
