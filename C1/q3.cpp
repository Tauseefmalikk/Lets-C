#include<stdio.h>
int main()
{
/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/
    float maths,english,science,sst,urdu,computers,total,percentage;
    printf("Enter the marks of maths:\n");
    scanf("%f",&maths);
    printf("Enter the marks of english:\n");
    scanf("%f",&english);
    printf("Enter the marks of science:\n");
    scanf("%f",&science);
    printf("Enter the marks of sst:\n");
    scanf("%f",&sst);
    printf("Enter the marks of urdu:\n");
    scanf("%f",&urdu);
    printf("Enter the marks of computers:\n");
    scanf("%f",&computers);
    total = maths+english+science+sst+urdu+computers;
    percentage = (total/600)*100;
    printf("Total marks are %f and percentage = %f",total,percentage);
    return 0;
}

