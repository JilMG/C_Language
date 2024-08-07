// Find smallest among three numbers
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
    
    if(a<b)
    {
        if(a<c)
        {
            printf("The Minimum value is : %d\n",a);
        }
        else
        {
            printf("The Minimum value is : %d\n",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("The Minimum value is : %d\n",b);
        }
        else
        {
            printf("The Minimum value is : %d\n",c);
        }
    }

    return 0;
}