//Area of Triangle
#include <stdio.h>

int main()
{
    float b,h,area;
    
    printf("Base = ");
    scanf("%f",&b);
    printf("Height = ");
    scanf("%f",&h);
    
    area=(b*h)/2;
    
    printf("Area = %.2f",area);

    return 0;
}