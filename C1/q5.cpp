/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.*/
#include<stdio.h>

int main()
{

    int l1 = 1189, l2 = 841,temp;
    for(int i=0;i<9;i++)
    {
        printf("The dimensions of A%d are %dmm x %dmm.\n",i,l1,l2);
        temp = l1;
        l1 = l2;
        l2 = temp/2;
    }
    return 0;
}
