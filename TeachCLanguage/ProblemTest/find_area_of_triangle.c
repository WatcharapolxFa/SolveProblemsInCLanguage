#include <stdio.h>
#define area 0.5 * (base * hight)
int main()
{
    float base, hight;
    printf("=========================================\n");
    printf("Welcome, this is a program for calculating the find the volume of a cylinder.\n");
    printf("Please enter the radius of the sphere : ");
    scanf("%f", &base);
    printf("Please enter the height of the cylindrical : ");
    scanf("%f", &hight);
    printf("%.2f", area);
    printf("\n=========================================");
    return 0;
}