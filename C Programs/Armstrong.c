
#include <stdio.h>

int main()
{
    int n,i,x,mul=0,a,b,cnt,c,d,y;
    printf("N = ");
    scanf("%d",&n);
    x=n;
    y=n;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    while(y!=0)
    {
        b=y%10;
        d=1;
        i=1;
        if(y!=0)
        {
            while(i<=cnt)
            {
                d=d*b;
                i++;
            }
        }
        mul+=d;
        y=y/10;
    }
    if(x==mul)
    {
        printf("\nArmstrong No.\n");
    }
    else
    {
        printf("\nNot Armstrong No.\n");
    }

    return 0;
}