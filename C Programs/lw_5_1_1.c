// Find Minimum no. from given two numbers using if...else
#include <stdio.h>

int main()
{
    int a,b;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    
    if(a<=b)
    {
        printf("\nThe minimum value is : %d",a);
    }
    else
    {
        printf("\nThe minimum value is : %d",b);
    }

    return 0;
}