#include<stdio.h>

int main()
{
    int n,a=0,b=1,c;
    printf("N = ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    
    return 0;
}