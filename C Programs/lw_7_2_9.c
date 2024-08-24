#include<stdio.h>

int main()
{
    int i,j,k=5;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=k)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        i<5?k--:k++;
    }

    return 0;
}