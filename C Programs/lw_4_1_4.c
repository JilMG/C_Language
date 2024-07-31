//Swap two variables using third variable
#include <stdio.h>

int main()
{
    int x,y,z; 
    
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    
    z=x;
    x=y;
    y=z;
    
    printf("\nSwaped X = %d",x);
    printf("\nSwaped Y = %d",y);
    
    return 0;
}