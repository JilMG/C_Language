#include<stdio.h>

int main()
{
    int i,j,k=5;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=k||j>=11-k)
            {
                if(j<=5)
                {
                    printf("%d",j);
                }
                else{
                    printf("%d",11-j);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(i<5)
        {
            k--;
        }
        else if(i>5)
        {
            k++;
        }
    }

    return 0;
}