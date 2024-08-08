// Find if a given no. is neutral or not using ladder if...else
#include <stdio.h>

int main()
{
    int n;
    printf("N = ");
    scanf("%d",&n);
    
    if(n>0)
    {
        printf("\nThe No. is Positive");
    }
    else if(n<0)
    {
        printf("\nThe No. is Negative");
    }
    else
    {
        printf("\nThe No. is Neutral");
    }
    
    return 0;
}