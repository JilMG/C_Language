#include<stdio.h>

int main()
{
    int n;
    printf("N = ");
    scanf("%d",&n);

    while(n>=0)
    {
        if(n%2==1)
        {
            printf("%d\t",n);
        }
        n--;
    }

    return 0;
}