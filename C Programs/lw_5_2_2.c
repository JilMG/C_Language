// Find largest among four numbers
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
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("The Maximum value is : %d",a);
            }
            else
            {
                printf("The Maximum value is : %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("The Maximum value is : %d",c);
            }
            else
            {
                printf("The Maximum value is : %d",d);
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("The Maximum value is : %d",b);
            }
            else
            {
                printf("The Maximum value is : %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("The Maximum value is : %d",c);
            }
            else
            {
                printf("The Maximum value is : %d",d);
            }
        }
    }
   
    return 0;
}