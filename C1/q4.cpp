/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/
#include<stdio.h>
#include<math.h>
int main()
{    
    float g1,g2,l1,l2,D;
    printf("Enter the latitude and longitude of first place:\n");
    scanf("%f %f",&g1,&l1);
    printf("Enter the latitude and longitude of second place:\n");
    scanf("%f %f",&g2,l2);
    D = 3963* acos(sin(l1)*cos(l2) + cos(l1)*cos(l2)*cos(g2-g1));
    printf("The distance between the two locations are %f",D);
    return 0;
}
