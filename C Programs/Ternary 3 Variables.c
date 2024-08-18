
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    (a>b)?(a>c)?printf("A is Max"):printf("C is Max"):(b>c)?printf("B is Max"):printf("C is Max");

    return 0;
}