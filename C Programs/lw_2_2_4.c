//Simple Interest
#include <stdio.h>

int main()
{
    float p,r,n,si;
    
    printf("Principal Amount = ");
    scanf("%f",&p);
    printf("Rate = ");
    scanf("%f",&r);
    printf("Time = ");
    scanf("%f",&n);
    
    si=(p*r*n)/100;
    
    printf("Simple Interest = %.2f",si);

    return 0;
}