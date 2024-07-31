//(x+y)^3
#include <stdio.h>

int main()
{
    float x,y; 
    
    printf("X = ");
    scanf("%f",&x);
    printf("Y = ");
    scanf("%f",&y);
    
    printf("(x+y)^3 = %.2f",(x+y)*(x+y)*(x+y));
    
    return 0;
}