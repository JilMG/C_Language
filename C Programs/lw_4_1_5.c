//Swap two variables without using third variable
#include <stdio.h>

int main()
{
    int x,y; 
    
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    
    x=x+y;
    y=x-y;
    x=x-y;
    
    printf("\nSwaped X = %d",x);
    printf("\nSwaped Y = %d",y);
    
    return 0;
}