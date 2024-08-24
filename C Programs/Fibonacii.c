
#include <stdio.h>

int main()
{
    int n,a=0,b=1,c;
    printf("N = ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",a);
        a=b;
        b=c;
    }

    return 0;
}