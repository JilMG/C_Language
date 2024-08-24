
#include <stdio.h>

int main()
{
    int n,magic,b,sum=0,x,l,rev=0,a;
    printf("N = ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        n=n/10;
    }
    
    x=sum;
    
    while(x!=0)
    {
        l=x%10;
        rev=rev*10+l;
        x=x/10;
    }
    
    magic=rev*sum;

    if(a==magic)
    {
        printf("\nMagic No.");
    }
    else
    {
        printf("\nNot Magic No.");
    }
    
    return 0;
}