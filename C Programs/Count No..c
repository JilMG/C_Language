
#include <stdio.h>

int main()
{
    int n,cnt=0;
    printf("N = ");
    scanf("%d",&n);
    
    while(n>0)
    {
        n/=10;
        if(n>=0)
        {
            cnt++;
        }
    }
    printf("Count = %d",cnt);

    return 0;
}