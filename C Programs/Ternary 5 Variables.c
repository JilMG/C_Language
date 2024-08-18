
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    printf("D = ");
    scanf("%d",&d);
    printf("E = ");
    scanf("%d",&e);
    
    (a>b&&a>c&&a>d&&a>e)?printf("\nA is Max"):((b>c&&b>d&&b>e)?printf("\nB is Max"):((c>d&&c>e)?printf("\nC is Max"):((d>e)?printf("\nD is Max"):printf("\nE is Max"))));

    return 0;
}