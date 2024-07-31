//Use of +,-,*,/and %
#include <stdio.h>

int main()
{
    int n1=12,n2=6,add,sub,mul,div,mod;
    
    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    mod=n1%n2;
    
    printf("Addition of %d and %d is %d",n1,n2,add);
    printf("\nSubstraction of %d and %d is %d",n1,n2,sub);
    printf("\nMultiplication of %d and %d is %d",n1,n2,mul);
    printf("\nDivision of %d and %d is %d",n1,n2,div);
    printf("\nModulo of %d and %d is %d",n1,n2,mod);
    
    printf("\n\n%d + %d = %d",n1,n2,add);
    printf("\n%d - %d = %d",n1,n2,sub);
    printf("\n%d * %d = %d",n1,n2,mul);
    printf("\n%d / %d = %d",n1,n2,div);
    printf("\n%d ./. %d = %d",n1,n2,mod);
    
    
    return 0;
}