
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
    
    (a>b&&a>c)?printf("\nA is Max"):((b>c)?printf("\nB is Max"):printf("\nC is Max"));

    return 0;
}