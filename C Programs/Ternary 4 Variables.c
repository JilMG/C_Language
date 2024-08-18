
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    printf("D = ");
    scanf("%d",&d);
    
    (a>b&&a>c&&a>d)?printf("\nA is Max"):((b>c&&b>d)?printf("\nB is Max"):((c>d)?printf("\nC is Max"):printf("\nD is Max")));

    return 0;
}